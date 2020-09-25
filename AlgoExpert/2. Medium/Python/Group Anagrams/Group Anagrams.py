# O(w * n * log(n) + n * w * log(w)) time | O(wn) space - where w
# n is the length of the longest word

def groupAnagrams(words):
	if len(words) == 0:
		return []

	sortedWords = ["".join(sorted(w)) for w in words]
	indices = [i for i in range(len(words))]
	indices.sort(key=lambda x: sortedWords[x])

	result = []
	currentAnagramGroup = []
	currentAnagram = sortedWords[indices[0]]
	for index in indices:
		word = words[index]
		sortedWord = sortedWords[index]

		if sortedWord == currentAnagram:
			currentAnagramGroup.append(word)
			continue

		result.append(currentAnagramGroup)
		currentAnagramGroup = [word]
		currentAnagram = sortedWord

	result.append(currentAnagramGroup)
	
	return result