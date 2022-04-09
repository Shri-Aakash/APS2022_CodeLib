# cook your dish here
try:
    for _ in range(int(input())):
        s=input()
        l=len(s)
        count,max_len=0,0
        start,end=s[0],s[-1]
        for i in range(l):
            if s[i]!=start and s[i]!=end:
                count+=1
            else:
                count=0
            max_len=max(count,max_len)
        if max_len==0:
            print(max_len-1)
        else:
            print(max_len)
except:
    pass