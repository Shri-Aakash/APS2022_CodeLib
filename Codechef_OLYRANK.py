# cook your dish here
try:
    for _ in range(int(input())):
        x1,y1,z1,x2,y2,z2=map(int,input().rstrip().split())
        if x1+y1+z1>x2+y2+z2:
            print(1)
        else:
            print(2)
except:
    pass
