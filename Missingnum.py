if __name__=='__main__':
    for _ in range(int(input())):
        l=list(map(int,input().rstrip().split()))
        l.sort()
        a1=(l[2]+l[0])/2
        b1=l[2]-a1
        #a2=(l[2]+l[1])/2
        #b2=l[2]-a2
        #a3=(l[3]+l[0])/2
        #b3=l[3]-a3
        #a4=(l[3]+l[1])/2
        #b4=l[3]-a4
        val=False
        if (a1%1==0 and a1!=0) and (b1%1==0 and b1!=0):
            if(a1*b1==l[3]) and a1//b1==l[1] and (a1>=0 and b1>=0) and (a1<=1e4 and b1<=1e4):
                print(int(a1),int(b1))
                val=True
        else:
            a1=(l[2]+l[1])/2
            b1=l[2]-a1
            if (a1%1==0 and a1!=0) and (b1%1==0 and b1!=0):
                if(a1*b1==l[3]) and a1//b1==l[1] and (a1>=0 and b1>=0) and (a1<=1e4 and b1<=1e4):
                    print(int(a1),int(b1))
                    val=True
            else:
                a1=(l[3]+l[0])/2
                b1=l[3]-a1
                if (a1%1==0 and a1!=0) and (b1%1==0 and b1!=0):
                    if(a1*b1==l[3]) and a1//b1==l[1] and (a1>=0 and b1>=0) and (a1<=1e4 and b1<=1e4):
                        print(int(a1),int(b1))
                        val=True
                else:
                    a1=(l[3]+l[1])/2
                    b1=l[3]-a1
                    if (a1%1==0 and a1!=0) and (b1%1==0 and b1!=0):
                        if(a1*b1==l[3]) and a1//b1==l[1] and (a1>=0 and b1>=0) and (a1<=1e4 and b1<=1e4):
                            print(int(a1),int(b1))
                            val=True
        if not val:
            print(-1,-1)
            

