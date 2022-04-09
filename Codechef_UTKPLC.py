# cook your dish here
try:
    for _ in range(int(input())):
        fst=list(map(str,input().rstrip().split()))
        x,y=map(str,input().rstrip().split())
        if fst.index(x)<fst.index(y):
            print(x)
        else:
            print(y)
except:
    pass
        
