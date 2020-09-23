# O(n) time | O(1) space

def findThreeLargestNumbers(array):
	threeLargest = [None, None, None]
	for num in array:
		updateLargest(threeLargest, num)
	return threeLargest

def updateLargest(threeLargest, num):
	if threeLargest[2] is None or num > threeLargest[2]:
		shiftAndUpdate(threeLargest, num, 2)
	elif threeLargest[1] is None or num > threeLargest[1]:
		shiftAndUpdate(threeLargest, num, 1)
	elif threeLargest[0] is None or num > threeLargest[0]:
		shiftAndUpdate(threeLargest, num, 0)