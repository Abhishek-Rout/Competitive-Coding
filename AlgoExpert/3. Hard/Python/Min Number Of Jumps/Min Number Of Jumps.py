# O(n) time | O(1) space

def minNumberOfJumps(array):
	if len(array) == 1:
		return 0
	jumps = 0
	maxReach = array[0]
	steps = array[0]
	for i in range(1, len(array) - 1):
		maxReach = max(maxReach, i + array[i])
		steps -= 1
		if steps == 0:
			jumps += 1
			steps = maxReach - i
	return jumps + 1