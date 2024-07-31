# # for(int i=0;i<10;i++) c,c++


# if(n==1):
#     print(0)
# elif(n==2):
#     print(0, " ", 1)
# else :
#     #n==3
#     x=0
#     y=1
#     print(x)
#     print(y)
#     for i in range(2,n):
#         z=x+y
#         print(z)
#         x=y
#         y=z




# factorial of a number



# n=int(input())
# fact=1

# for i in range(1,n+1):
#     fact=fact*i

# print("factorial==",fact)


# for i in range(6):
#     print(i)




# prime number


# n=int(input())

# cnt=0
# count number that divides n (1,n)


# for i in range(1,n+1):
#     if(n%i==0):
#         cnt+=1
# if(cnt==2):
#     print("prime number")
# else:
#     print("Not a prime number")


# sum of sqre of 1 to n

# n=int(input())
# sm=0
# for i in range (1,n+1):
#     sm=sm+i*i
# print("sum =",sm)



#reverse of a number


# n=int(input())
# rev=0
# while(n>0):
#     rev=(rev*10+n%10)

#     n=int(n/10)
# print("value=",rev)

# lcm of a two numver
# import math

# n=int(input())
# m=int(input())

# lcm=n*m//math.gcd(n,m)

# print(lcm)

# str=input()
# uppercase=0
# lowercase=0
# number=0

# for i in str:
#     if( i>='A' and i<='Z'):
#         uppercase+=1
#     elif( i>='a' and i<='z'):
#         lowercase+=1
#     elif(i>='0' and i<='9'):
#         number+=1
# print(uppercase," ",lowercase," ",number)




# *
# * * 
# * * * 
# * * * *


# n=4

# for i in range(1,n+1):
#     for j in range ( 1,i+1):
#         print("*",end=" ")
#     print()



# for i in range(1,n+1):
#     for j in range ( 0,n-i+1):
#         print("*",end=" ")
#     print()


print()

a=50//3**2%4*5**2

print(a)

# x,y
# x=2
# y=3

# print("x",x,"y= ",y)
# x,y=y,x
# print("x",y,"y= ",y)


# for i in range (1,10):
#     if(i==4):
#         pass
#     print(i)