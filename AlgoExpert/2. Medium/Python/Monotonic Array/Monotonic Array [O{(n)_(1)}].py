# O(n) time | O(1) space - where n is the length of the array

def isMonotonic(array):
	if len(array) <= 2:
		return True
	
	direction = array[1] - array[0]
	for i in range(2, len(array)):
		if direction == 0:
			direction = array[i] - array[i - 1]
			continue
		if breaksDirection(direction, array[i - 1], array[i]):
			return False

	return True

def breaksDirection(direction, previousInt, currentInt):
	difference = currentInt - previousInt
	if direction > 0:
		return difference < 0
	return difference > 0