#   O(b^2 + ns) time | O(b^2 + n) space

def multiStringSearch(bigString, smallStrings):
    modifiedSuffixTrie = ModifiedSuffixTrie(bigString)
    return [modifiedSuffixTrie.conntains(string) for string in smallStrings]

class ModifiedSuffixTrie:
    def __init__(self, string):
        self.root = {}
        self.populateModifiedSuffixTrieFrom(string)

    def populateModifiedSuffixTrieFrom(self, string):
        for i in range(len(string)):
            self.insertSubstringStartinngAt(i, string)

    def insertSubstringStartinngAt(self, idx, string):
        node = self.root
        for j in range(idx, len(string)):
            letter = string[j]
            if letter not in node:
                node[letter] = {}
            node = node[letter]

    def conntains(self, string):
        node = self.root
        for letter in string:
            if letter not in node:
                return False
            node = node[letter]
        return True