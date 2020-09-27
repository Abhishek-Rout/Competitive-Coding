# Upper Bound: O((n*(2n)!)/(n!(n+1)!)) time | O(n) space

def numberOfBinaryTreeTopologies(n):
	if n == 0:
		return 1
	numberOfTrees = 0
	for leftTreeSize in range(n):
		rightTreeSize = n - 1 - leftTreeSize
		numberOfLeftTrees = numberOfBinaryTreeTopologies(leftTreeSize)
		numberOfRightTrees = numberOfBinaryTreeTopologies(rightTreeSize)
		numberOfTrees += numberOfLeftTrees * numberOfRightTrees
	return numberOfTrees