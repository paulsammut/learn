#!/usr/bin/env python

print 'hello'

myList=[12,-23,13,23,12]

# reverse lookup
for i, e in reversed(list(enumerate(myList))):
        print(i, e)


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
    return

find_max_crossing(myList, 0, 2, 4)
