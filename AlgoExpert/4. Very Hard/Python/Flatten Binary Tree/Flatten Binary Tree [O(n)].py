class BinaryTree:

	def __init__(self, value, left=None, right=None):
		self.value = value
		self.left = left
		self.right = right

	# O(n) time | O(n) space - where n is the number of nodes in the BinaryTree

def flattenBinaryTree(root):
	inOrderNodes = getNodesInOrder(root, [])
	for i in range(0, len(inOrderNodes) - 1):
		leftNode = inOrderNodes[i]
		rightNode = inOrderNodes[i + 1]
		leftNode.right = rightNode
		rightNode.left = leftNode
	return inOrderNodes[0]

def getNodesInOrder(tree, array):
	if tree is not None:
		getNodesInOrder(tree.left, array)
		array.append(tree)
		getNodesInOrder(tree.right, array)
	return array