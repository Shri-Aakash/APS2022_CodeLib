# cook your dish here
import math
try:
    for _ in range(int(input())):
        x,m=map(int,input().rstrip().split())
        min_op=0
        while True:
            if x<=pow(2,min_op):
                break
            min_op+=1
        if min_op>m:
            print(0)
        else:
            print(m-min_op)
except:
    pass
    
    
