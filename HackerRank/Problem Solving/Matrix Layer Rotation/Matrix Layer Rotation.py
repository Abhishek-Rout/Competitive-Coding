#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the matrixRotation function below.
def rotate(arr, r):
    return arr[r%len(arr):] + arr[:r%len(arr)]

def matrixRotation(matrix, r):
    M, m, n = list(matrix), len(matrix), len(matrix[0])
    for i in range(min(m,n)//2):
        R = rotate(matrix[i][i:n-1-i] + [matrix[j][n-1-i] for j in range(i,m-1-i)] + matrix[m-1-i][n-1-i:i:-1] + [matrix[j][i] for j in range(m-1-i,i,-1)], r)
        M[i][i:n-1-i], M[m-1-i][n-1-i:i:-1] = R[:n-1-2*i], R[m+n-2-4*i:m+2*n-3-6*i]
        for j in range(m-1-2*i):
            M[i+j][n-1-i] = R[n-1-2*i+j]
            M[m-1-i-j][i] = R[m+2*n-3-6*i+j]
    [print(*r) for r in M]

if __name__ == '__main__':
    mnr = input().rstrip().split()

    m = int(mnr[0])

    n = int(mnr[1])

    r = int(mnr[2])

    matrix = []

    for _ in range(m):
        matrix.append(list(map(int, input().rstrip().split())))

    matrixRotation(matrix, r)