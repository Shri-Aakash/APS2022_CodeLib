# cook your dish here
try:
    for _ in range(int(input())):
        dif=list(map(int,input().rstrip().split()))
        dif.sort()
        if dif[0]==dif[1] and dif[0]==dif[2] and dif[0]==dif[3]:
            print(0)
        elif dif[0]==dif[1]==dif[2] or dif[1]==dif[2]==dif[3]:
            print(1)
        else:
            print(2)
except:
    pass
        
