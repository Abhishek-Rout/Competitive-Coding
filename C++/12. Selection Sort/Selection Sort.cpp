#include <iostream>
#include <vector>

using namespace std;

vector<int> selectionSort(vector<int> array);

// Best: O(n^2) time | O(1) space
// Average: O(n^2) time | O(1) space
// Worst: O(n^2) time | O(1) space

vector<int> selectionSort(vector<int> array) {
	if (array.empty()) {
		return {};
	}
	int startIdx = 0;
	while (startIdx < array.size() - 1) {
		int smallestIdx = startIdx;
		for (int i = startIdx + 1; i < array.size(); i++) {
			if (array[smallestIdx] > array[i]) {
				smallestIdx = i;
			}
		}
		swap(array[startIdx], array[smallestIdx]);
		startIdx++;
	}
	return array;
}