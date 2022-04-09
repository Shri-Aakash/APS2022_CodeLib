# cook your dish here
try:
    for _ in range(int(input())):
        x,y=map(int,input().rstrip().split())
        if x>0 and (x+2*y)%2==0:
            print('YES')
        elif x==0 and y%2==0:
            print('YES')
        else:
            print('NO')
except:
    pass
