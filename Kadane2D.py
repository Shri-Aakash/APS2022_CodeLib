# -*- coding: utf-8 -*-
"""
Created on Tue Mar 15 22:39:15 2022

@author: aakaa
"""

def kadane1D(numbers):
    cur_sum,max_sum=0,0
    start,end=0,0
    for cur_end,ele in enumerate(numbers):
        if cur_sum<=0:
            cur_sum=ele
            cur_start=cur_end
        else:
            cur_sum+=ele
        if cur_sum>max_sum:
            max_sum=cur_sum
            start=cur_start
            end=cur_end
    return max_sum,start,end

def kadane2D(matrix,row,col):
    l,r=0,0
    cur_sum,max_sum=0,0
    max_r,max_l,max_u,max_d=0,0,0,0
    max_list=[]
    for l in range(col):
        arr=[0]*row
        for r in range(l,col):
            for k in range(row):
                arr[k]+=matrix[k][r]
            cur_sum,u,d=kadane1D(arr)
            if cur_sum>max_sum:
                max_sum=cur_sum
                max_u=u
                max_l=l
                max_r=r
                max_d=d
    max_list.append(max_sum)
    #return max_sum
    for i in range(max_l,max_r+1):
        for j in range(max_u,max_d+1):
            if matrix[j][i]<0:
                max_sum+=abs(matrix[j][i])
    max_list.append(max_sum)
    return max_list
if __name__=='__main__':
    n,m=map(int,input().rstrip().split())
    l=[list(map(int,input().rstrip().split())) for y in range(m)]
    print('\n'.join(map(str,kadane2D(l, n, m))))
    