import math

x1,y1,r1=map(int,input().split())
x2,y2,r2=map(int,input().split())
distance=math.sqrt(pow( abs(x1-x2),2)+pow( abs(y1-y2),2))
if distance<r1+r2:print("YES")
else :print("NO")