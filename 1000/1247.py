import sys
input=sys.stdin.readline

for i in range(3):
    n=int(input())
    num=0;
    for j in range(n):
        num+=int(input())

    if num==0:
        print(0)
    elif num<0:
        print("-")
    else:
        print("+")
        
