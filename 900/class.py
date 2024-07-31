f=[1,2,3,4,5,6,7,8,9,10]
n=int(input())
def countprms(n):
    cnt=0
    for i in range (1,n+1):
        if n%i==0:
            cnt+=1
    return cnt

for i in range (1,n):
    cnt=countprms(i)
    if(cnt<=2):
        print(i)
    
    