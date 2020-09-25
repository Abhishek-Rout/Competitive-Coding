# O(n) time | O(1) space - where n is the length of the array

def moveElementToEnd(array, toMove):
	i = 0
	j = len(array) - 1
	while i < j:
		while i < j and array[j] == toMove:
			j -= 1
		if array[i] == toMove:
			array[i], array[j] = array[j], array[i]
		i += 1
	return array