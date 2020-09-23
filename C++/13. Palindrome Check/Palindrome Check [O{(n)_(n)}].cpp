#include <iostream>

using namespace std;

bool helper(string str, int i);

// O(n) time | O(n) space

bool isPalindrome(string str) { return helper(str, 0); }

bool helper(string str, int i) {
	int j = str.length() - 1 - i;
	return i >= j ? true : str[i] == str[j] && helper(str, i + 1);
}