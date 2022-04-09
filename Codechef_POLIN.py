# cook your dish here
try:
    for _ in range(int(input())):
        l=[]
        n=int(input())
        for _ in range(n):
            t=tuple(map(int,input().rstrip().split()))
            l.append(t)
        ## t[0] is x and t[1] is y
        x_points=set(i[0] for i in l)
        y_points=set(i[1] for i in l)
        print(len(y_points)+len(x_points))
except:
    pass
