# O(n) time | O(1) space - where n is the length of the array

def isMonotonic(array):
	isNonDecreasing = True
	isNonIncreasing = True
	for i in range(1, len(array)):
		if array[i] < array[i - 1]:
			isNonDecreasing = False
		if array[i] > array[i - 1]:
			isNonIncreasing = False
	
	return isNonDecreasing or isNonIncreasing