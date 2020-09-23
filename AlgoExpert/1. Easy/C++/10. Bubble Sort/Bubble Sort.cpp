#include <iostream>
#include <vector>

using namespace std;

vector<int> bubbleSort(vector<int> array);

// Best: O(n) time | O(1) space
// Average: O(n^2) time | O(1) space
// Worst: O(n^2) time | O(1) space

vector<int> bubbleSort(vector<int> array) {
	if (array.empty()) {
		return {};
	}
	bool isSorted = false;
	int counter = 0;
	while (!isSorted) {
		isSorted = true;
		for (int i = 0; i < array.size() - 1 - counter; i++) {
			if (array[i] > array[i + 1]) {
				swap(array[i], array[i + 1]);
				isSorted = false;
			}
		}
		counter++;
	}
	return array;
}