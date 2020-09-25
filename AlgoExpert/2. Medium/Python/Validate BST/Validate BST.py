class BST:

def __init__(self, value):
	self.value = value
	self.left = None
	self.right = None

	# O(n) time | O(d) space
	
	def validateBst(tree):
		return validateBstHelper(tree, float("-inf"), float("inf"))

	def validateBstHelper(tree, minValue, maxValue):
		if tree is None:
			return True
		if tree.value < minValue or tree.value >= maxValue:
			return False
		leftIsValid = validateBstHelper(tree.left, minValue, tree.value)
		return leftIsValid and validateBstHelper(tree.right, tree.value)