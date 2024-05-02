n=int(input())
for i in range(n):
    a, b = map(int, (input().split()))
    print("Scenario #%d:" % (i + 1))
    print( (b-a+1)*(a+b)//2 )
    print()