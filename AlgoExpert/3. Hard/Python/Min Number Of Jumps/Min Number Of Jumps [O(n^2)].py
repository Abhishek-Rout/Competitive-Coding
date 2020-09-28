# O(n^2) time | O(n) space

def minNumberOfJumps(array):
	jumps = [float("inf") for x in array]
	jumps[0] = 0
	for i in range(1, len(array)):
		for j in range(0, i):
			if array[j] >= i - j:
				jumps[i] = min(jumps[j] + 1, jumps[i])
	return jumps[-1]