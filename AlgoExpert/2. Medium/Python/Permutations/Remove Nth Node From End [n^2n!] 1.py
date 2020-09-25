# O(n*n!) time | O(n*n!) space

def getPermutations(array):
	permutations = []
	permutationsHelper(0, array, permutations)
	return permutations

def permutationsHelper(i, array, permutations):
	if i == len(array) - 1:
		permutations.append(array[:])
	else:
		for j in range(i, len(array)):
			swap(array, i, j)
		permutationsHelper(i + 1, array, permutations)
		swap(array, i, j)

def swap(array, i, j):
	array[i], array[j] = array[j], array[i]