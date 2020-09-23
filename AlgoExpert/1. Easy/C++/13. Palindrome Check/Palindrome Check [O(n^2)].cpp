#include <iostream>

using namespace std;

// O(n^2) time | O(n) space

bool isPalindrome(string str) {
	string reversedString = "";
	for (int i = str.length() - 1; i >= 0; i--) {
		reversedString += str[i];
	}
	return str == reversedString;
}