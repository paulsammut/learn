#!/usr/bin/env python

import math

print 'hello'

myList=[100,12,-923,13,23,12]

print myList

print 'Performing analysis!'


def find_max_crossing(A,low,mid,high):

    # mid to left
    left_sum = -float("inf")
    sum = 0
    i = mid;
    while i >= 0:
        sum += A[i]
        if sum > left_sum:
            left_sum = sum
            max_left_sum = i
        i-=1

    # mid to right
    right_sum = -float("inf")
    sum = 0
    i = mid+1;
    while i < len(A):
        sum += A[i]
        if sum > right_sum:
            right_sum = sum
            max_right_sum = i
        i += 1

    max_sum = left_sum + right_sum

    print max_sum, " at index A[",max_left_sum,",",max_right_sum,"]"
    return  max_left_sum, max_right_sum, max_sum

def find_max_subarray(A,low,high):
    if high == low:
        return(low,high, A[low])
    else:
        mid = math.trunc((low+high)/2)
        print mid
        left_low, left_high, left_sum = find_max_subarray(A, low, mid)
        right_low, right_high, right_sum = find_max_subarray(A, mid+1, high)
        cross_low, cross_high, cross_sum = find_max_crossing(A, low, mid, high)

        if left_sum >= right_sum and left_sum >= cross_sum:
            print 'Left Sum Wins!'
            return(left_low, left_high, left_sum)
        elif right_sum >= left_sum and right_sum >= cross_sum:
            print 'Right Sum Wins!'
            return(right_low, right_high, right_sum)
        else:
            print 'Cross Wins'
            return (cross_low, cross_high, cross_sum)

a, b, c = find_max_subarray(myList, 0, len(myList)-1)
print a, b, c
