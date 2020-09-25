# O(n*2^n) time | O(n*2^n) space

def powerset(array):
	subsets = [[]]
	for ele in array:
		for i in range(len(subsets)):
			currentSubset = subsets[i]
			subsets.append(currentSubset + [ele])
	return subsets