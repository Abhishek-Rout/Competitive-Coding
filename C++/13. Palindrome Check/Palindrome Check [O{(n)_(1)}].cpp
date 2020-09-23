#include <iostream>

using namespace std;

// O(n) time | O(1) space

bool isPalindrome(string str) {
	int leftIdx = 0;
	int rightIdx = str.length() - 1;
	while (leftIdx < rightIdx) {
		if (str[leftIdx] != str[rightIdx]) {
			return false;
		}
		leftIdx++;
		rightIdx--;
	}
	return true;
}