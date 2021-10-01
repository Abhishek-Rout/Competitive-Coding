t=int(input())
for i in range(t):
    r=int(input())
    x1,y1=map(int, input().split())
    x2,y2=map(int, input().split())
    x3,y3=map(int, input().split())
    rst1=(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)))
    rst2=(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)))
    rst3=(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)))
    r1=r*r
    if ((rst1<=r1 and rst2<=r1) or (rst2<=r1 and rst3<=r1) or (rst3<=r1 and rst1<=r1)):
        print('yes')
    else:
        print("no")
