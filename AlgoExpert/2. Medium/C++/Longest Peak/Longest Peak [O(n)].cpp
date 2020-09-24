#include <iostream>

using namespace std;

// O(n) time | O(1) space - where n is the length of the input a

int longestPeak(vector<int> array) {
	int longestPeakLength = 0;
	int i = 1;
	while (i < int(array.size() - 1)) {
		bool isPeak = array[i - 1] < array[i] && array[i] > array[i + 1];
		if (!isPeak) {
			i += 1;
			continue;
		}
		int leftIdx = i - 2;
		while (leftIdx >= 0 && array[leftIdx] < array[leftIdx + 1]) {
			leftIdx -= 1;
		}
		int rightIdx = i + 2;
		while (rightIdx < array.size() && array[rightIdx] < array[rightIdx - 1]) {
			rightIdx += 1;
		}
		int currentPeakLength = rightIdx - leftIdx - 1;
		if (currentPeakLength > longestPeakLength) {
			longestPeakLength = currentPeakLength;
		}
		i = rightIdx;
	}
	return longestPeakLength;
}