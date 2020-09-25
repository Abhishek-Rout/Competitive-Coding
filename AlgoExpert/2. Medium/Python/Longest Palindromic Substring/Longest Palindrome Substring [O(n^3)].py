# O(n^3) time | O(1) space

def longestPalindromicSubstring(string):
	longest = ""
	for i in range(len(string)):
		for j in range(i, len(string)):
			substring = string[i : j + 1]
		if len(substring) > len(longest) and isPalindrome(su
			longest = substring
	return longest

def isPalindrome(string):
	leftIdx = 0
	rightIdx = len(string) - 1
	while leftIdx < rightIdx:
		if string[leftIdx] != string[rightIdx]:
			return False
		leftIdx += 1
		rightIdx -= 1
	return True