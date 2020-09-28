# O(n) time | O(n) space - where n is the total number of elements input

def zigzagTraverse(array):
	height = len(array) - 1
	width = len(array[0]) - 1
	result = []
	row, col = 0, 0
	goingDown = True
	while not isOutOfBounds(row, col, height, width):
		result.append(array[row][col])
		if goingDown:
			if col == 0 or row == height:
				goingDown = False
				if row == height:
					col += 1
				else:
					row += 1
			else:
				row += 1
				col -= 1
		else:
			if row == 0 or col == width:
				goingDown = True
				if col == width:
					row += 1
				else:
					col += 1
			else:
				row -= 1
				col += 1
	return result