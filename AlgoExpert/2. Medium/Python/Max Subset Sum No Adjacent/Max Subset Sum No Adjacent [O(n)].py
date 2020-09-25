# O(n) time | O(n) space

def maxSubsetSumNoAdjacent(array):
	if not len(array):
		return 0
	elif len(array) == 1:
		return array[0]
	maxSums = array[:]
	maxSums[1] = max(array[0], array[1])
	for i in range(2, len(array)):
		maxSums[i] = max(maxSums[i - 1], maxSums[i - 2] + array[i])
	return maxSums[-1]