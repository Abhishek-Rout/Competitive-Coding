# O(log(n)) time | O(1) space

def binarySearch(array, target):
	return binarySearchHelper(array, target, 0, len(array) - 1)

def binarySearchHelper(array, target, left, right):
	while left <= right:
		middle = (left + right) // 2
		potentialMatch = array[middle]
		if target == potentialMatch:
			return middle
		elif target < potentialMatch:
			right = middle - 1
		else:
			left = middle + 1
	return -1