#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// O(n^2) time | O(n) space

vector<vector<int>> threeNumberSum(vector<int> array, int target) {
	sort(array.begin(), array.end());
	vector<vector<int>> triplets;
	for (int i = 0; i < array.size() - 2; i++) {
		int left = i + 1;
		int right = array.size() - 1;
		while (left < right) {
			int currentSum = array[i] + array[left] + array[right];
			if (currentSum == targetSum) {
				triplets.push_back({array[i], array[left], array[right]});
				left++;
				right--;
			} else if (currentSum < targetSum) {
				left++;
			} else if (currentSum > targetSum) {
				right--;
			}
		}
	}
	return triplets;
}