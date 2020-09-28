# O(n) time | O(n) space

def largestRange(array):
	bestRange = []
	longestLength = 0
	nums = {}
	for num in array:
		nums[num] = True
	for num in array:
		if not nums[num]:
			continue
		nums[num] = False
		currentLength = 1
		left = num - 1
		right = num + 1
		while left in nums:
			nums[left] = False
			currentLength += 1
			left -= 1
		while right in nums:
			nums[right] = False
			currentLength += 1
			right += 1
		if currentLength > longestLength:
			longestLength = currentLength
			bestRange = [left + 1, right - 1]
	return bestRange