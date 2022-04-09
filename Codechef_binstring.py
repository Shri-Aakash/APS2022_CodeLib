# cook your dish here
try:
    for _ in range(int(input())):
        n=int(input())
        s=input()
        c0=0
        c1=0
        for i in range(n):
            if s[i]=='0':
                c0+=1
            else:
                c1+=1
        if c1==n or c0==n:
            print(1)
        else:
            count=1
            for i in range(n-1):
                if s[i]!=s[i+1]:
                    count+=1
            print(count)
except:
    pass
