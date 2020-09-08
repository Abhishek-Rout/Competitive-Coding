# Matrix Layer Rotation

You are given a 2D matrix of dimension m x n and a positive integer r. 

You have to rotate the matrix  times and print the resultant matrix. 

Rotation should be in anti-clockwise direction.

Rotation of a 4x5 matrix is represented by the following figure. Note 

that in one rotation, you have to shift elements by one step only.

It is guaranteed that the minimum of m and n will be even.

As an example rotate the Start matrix by 2:

 Start                      First                       Second

 1 2 3 4         |          2  3  4  5         |       3  4  5  6
 
12 1 2 5         ->        1  2  3  6       ->       2  3  4  7

11 4 3 6          |         12  1  4  7         |      1  2  1  8

10 9 8 7          |         11 10  9  8         |      12 11 10  9


### Function Description

Complete the matrixRotation function in the editor below. It should 

print the resultant 2D integer array and return nothing.

matrixRotation has the following parameter(s):

- matrix: a 2D array of integers
- r: an integer that represents the rotation factor


### Input Format

The first line contains three space separated integers, m, n, and r, 

the number of rows and columns in matrix, and the required rotation.
The next m lines contain n space-separated integers representing the 

elements of a row of matrix.

### Constraints

- 2 <= m,n <= 300
- 1 <= r <= 10^9
- min(m,n)%2 = 0
- 1 <= aij <= 10^8 where i belongs to [1...m] and [j...n]


### Output Format

Print each row of the rotated matrix as space-separated integers on 

separate lines.


### Sample Input 

### Sample Input 1

4 4 2

1 2 3 4

5 6 7 8

9 10 11 12

13 14 15 16


### Sample Output 1

3 4 8 12

2 11 10 16

1 7 6 15

5 9 13 14




### Sample Input 2

5 4 7

1 2 3 4

7 8 9 10

13 14 15 16

19 20 21 22

25 26 27 28


### Sample Output 2

28 27 26 25

22 9 15 19

16 8 21 13

10 14 20 7

4 3 2 1
