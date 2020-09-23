#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

// O(n) time | O(n) space

bool isPalindrome(string str) {
	vector<char> reversedChars;
	for (int i = str.length() - 1; i >= 0; i--) {
		reversedChars.push_back(str[i]);
	}
	return str == string(reversedChars.begin(), reversedChars.end());
}