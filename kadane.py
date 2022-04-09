# -*- coding: utf-8 -*-
"""
Created on Tue Mar 15 20:21:17 2022

@author: aakaa
"""

def kadane(numbers):
    best_sum = 0  # or: float('-inf')
    best_start = best_end = 0  # or: None
    current_sum = 0
    for current_end, x in enumerate(numbers):
        if current_sum <= 0:
            # Start a new sequence at the current element
            current_start = current_end
            current_sum = x
        else:
            # Extend the existing sequence with the current element
            current_sum += x

        if current_sum > best_sum:
            best_sum = current_sum
            best_start = current_start
            best_end = current_end + 1  # the +1 is to make 'best_end' match Python's slice convention (endpoint excluded)

    return best_sum, best_start, best_end

if __name__=='__main__':
    n=int(input())
    l=list(map(int,input().rstrip().split()))
    all_pos,all_neg=False,False
    val1,val2=False,False
    for ele in l:
        if ele > 0:
            val1=True
        else:
            val1=False
            break
    if val1 :
        all_pos=True
    else:
        for ele in l:
            if ele < 0:
                val2=True
            else:
                val2=False
                break
        if val2:
            all_neg=True
    if not (all_pos or all_neg):
         bs,start,end=kadane(l)
         del l[start:end]
         bs2,start,end=kadane(l)
         print(bs,bs2,sep='\n')
    else:
        if all_pos:
            print(sum(l))
            print(0)
        else:
            l.sort(reverse=True)
            print(l[0])
            print(l[1])
