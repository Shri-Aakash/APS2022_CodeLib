# cook your dish here
try:
    for _ in range(int(input())):
        n=int(input())
        s=bin(n)[2:]
        if n==1 or n==2:
            print(0)
        else:
            c=len(s)
            print(n-c)
except:
    pass

