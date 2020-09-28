# Average: O(n^2) time | O(n^2) space
# Worst: O(n^3) time | O(n^2) space

def fourNumberSum(array, targetSum):
	allPairSums = {}
	quadruplets = []
	for i in range(1, len(array) - 1):
		for j in range(i + 1, len(array)):
			currentSum = array[i] + array[j]
			difference = targetSum - currentSum
			if difference in allPairSums:
				for pair in allPairSums[difference]:
					quadruplets.append(pair + [array[i], array[j]])
		for k in range(0, i):
			currentSum = array[i] + array[k]
			if currentSum not in allPairSums:
				allPairSums[currentSum] = [[array[k], array[i]]]
			else:
				allPairSums[currentSum].append([array[k], array[i]])
	return quadruplets