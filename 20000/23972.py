import sys
input=sys.stdin.readline

k,n=map(int, input().split())

if n==1:
    print(-1)
else:
    temp=(k*n)//(n-1)
    if(k*n)%(n-1):
        temp+=1
    print(temp)