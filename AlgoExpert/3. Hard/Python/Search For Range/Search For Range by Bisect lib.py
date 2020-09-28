import bisect
def searchForRange(array, target):
    # Write your code here.
    left = bisect.bisect_left(array, target)
	right = bisect.bisect_right(array, target)
	return [left, right - 1] if left < right else [-1, -1]