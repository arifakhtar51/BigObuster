MOD = 10**9 + 7

def countConfigurations(n, k, moves):
    memo = {}
    
    def dp(r, c, usedRows, usedCols, k):
        if k == 0:
            return 1
        
        if (r, c, tuple(sorted(usedRows)), tuple(sorted(usedCols))) in memo:
            return memo[(r, c, tuple(sorted(usedRows)), tuple(sorted(usedCols)))]
        
        total = 0
        
        # Place a rook if not already used and not on the diagonal
        if r != c and r not in usedRows and c not in usedCols:
            total += dp(r + 1, c + 1, usedRows | {r}, usedCols | {c}, k - 1)
        
        # Skip the current cell
        total += dp(r + 1, c, usedRows, usedCols, k)
        total %= MOD
        
        memo[(r, c, tuple(sorted(usedRows)), tuple(sorted(usedCols)))] = total
        return total
    
    return dp(0, 0, set(), set(), k)

# Input handling
t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    moves = [tuple(map(int, input().split())) for _ in range(k)]
    print(countConfigurations(n, k, moves))
