from itertools import permutations

# Define the list
lst = [3, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 3]

# Generate and print all permutations
for perm in permutations(lst):
    print(perm)
