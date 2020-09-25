# O(w * n * log(n)) time | O(wn) space - where w is the number o
# n is the length of the longest word

def groupAnagrams(words):
	anagrams = {}
	for word in words:
		sortedWord = "".join(sorted(word))
		if sortedWord in anagrams:
			anagrams[sortedWord].append(word)
		else:
			anagrams[sortedWord] = [word]
	return list(anagrams.values())