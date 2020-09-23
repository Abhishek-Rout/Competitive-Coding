# O(log(n)) time | O(log(n)) space

def binarySearch(array, target):
	return binarySearchHelper(array, target, 0, len(array) - 1)

def binarySearchHelper(array, target, left, right):
	if left > right:
		return -1
	middle = (left + right) // 2
	potentialMatch = array[middle]
	if target == potentialMatch:
		return middle
	elif target < potentialMatch:
		return binarySearchHelper(array, target, left, middle - 1)
	else:
		return binarySearchHelper(array, target, middle + 1, right)