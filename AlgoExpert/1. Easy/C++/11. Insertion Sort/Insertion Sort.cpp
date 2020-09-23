#include <iostream>
#include <vector>

using namespace std;

vector<int> insertionSort(vector<int> array);

// Best: O(n) time | O(1) space
// Average: O(n^2) time | O(1) space
// Worst: O(n^2) time | O(1) space

vector<int> insertionSort(vector<int> array) {
	if (array.empty()) {
		return {};
	}
	for (int i = 1; i < array.size(); i++) {
		int j = i;
		while (j > 0 && array[j] < array[j - 1]) {
			swap(array[j], array[j - 1]);
			j -= 1;
		}
	}
	return array;
}