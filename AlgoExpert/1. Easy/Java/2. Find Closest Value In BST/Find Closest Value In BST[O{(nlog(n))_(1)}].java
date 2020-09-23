class Program {

// Average: O(log(n)) time | O(1) space
// Worst: O(n) time | O(1) space

	public static int findClosestValueInBst(BST tree, int target) {
		return findClosestValueInBst(tree, target, Double.MAX_VALUE);
	}

	public static int findClosestValueInBst(BST tree, int target, double closest) {
		BST currentNode = tree;
		while (currentNode != null) {
			if (Math.abs(target - closest) > Math.abs(target - currentNode) {
				closest = currentNode.value;
			}
			if (target < currentNode.value) {
				currentNode = currentNode.left;
			} else if (target > currentNode.value) {
				currentNode = currentNode.right;
			} else {
				break;
			}
		}
	}
}