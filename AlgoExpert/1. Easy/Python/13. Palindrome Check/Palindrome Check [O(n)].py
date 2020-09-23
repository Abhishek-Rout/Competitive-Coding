# O(n) time | O(n) space

def isPalindrome(string):
	reversedChars = []
	for i in reversed(range(len(string))):
		reversedChars.append(string[i])
	return string == "".join(reversedChars)