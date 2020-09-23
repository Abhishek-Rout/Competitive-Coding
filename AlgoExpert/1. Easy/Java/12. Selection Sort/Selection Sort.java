class Program {

	// Best: O(n^2) time | O(1) space
	// Average: O(n^2) time | O(1) space
	// Worst: O(n^2) time | O(1) space

	public static int[] selectionSort(int[] array) {
		if (array.length == 0) {
			return new int[] {};
		}
		int startIdx = 0;
		while (startIdx < array.length - 1) {
			int smallestIdx = startIdx;
			for (int i = startIdx + 1; i < array.length; i++) {
				if (array[smallestIdx] > array[i]) {
					smallestIdx = i;
				}
			}
			swap(startIdx, smallestIdx, array);
			startIdx++;
		}
	return array;
	}

	public static void swap(int i, int j, int[] array) {
		int temp = array[j];
		array[j] = array[i];
		array[i] = temp;
	}
}