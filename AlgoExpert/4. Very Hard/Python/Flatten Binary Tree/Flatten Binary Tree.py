class BinaryTree:

	def __init__(self, value, left=None, right=None):
		self.value = value
		self.left = left
		self.right = right

# O(n) time | O(d) space - where n is the number of nodes in the Binar
# and d is the depth (height) of the Binary Tree
def flattenBinaryTree(root):
	leftMost, _ = flattenTree(root)
	return leftMost

def flattenTree(node):
	if node.left is None:
		leftMost = node
	else:
		leftSubtreeLeftMost, leftSubtreeRightMost = flattenTree(node.left, node.right)
		connectNodes(leftSubtreeRightMost, node)
		leftMost = leftSubtreeLeftMost

	if node.right is None:
		rightMost = node
	else:
		rightSubtreeLeftMost, rightSubtreeRightMost = flattenTree(node.left, node.right)
		connectNodes(node, rightSubtreeLeftMost)
		rightMost = rightSubtreeRightMost

	return [leftMost, rightMost]