# O(n^2) time | O(n) space

def numberOfBinaryTreeTopologies(n):
	cache = [1]
	for m in range(1, n + 1):
		numberOfTrees = 0
		for leftTreeSize in range(m):
			rightTreeSize = m - 1 - leftTreeSize
			numberOfLeftTrees = cache[leftTreeSize]
			numberOfRightTrees = cache[rightTreeSize]
			numberOfTrees += numberOfLeftTrees * numberOfRightTrees
		cache.append(numberOfTrees)
	return cache[n]