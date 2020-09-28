#   O(bs + ns) time | O(ns) space

def multiStringSearch(bigString, smallStrings):
    trie = Trie()
    for string in smallStrings:
        trie.insert(string)
    containedString = {}
    for i in range(len(bigString)):
        findSmallStringsIn(bigString, i, trie, containedString)
    return [string in containedString for string in smallStrings]

def findSmallStringsIn(string, startIdx, trie, containedStringns):
    currentNode = trie.root
    for i in range(startIdx, len(string)):
        currentChar = string[i]
        if currentChar not in currentNode:
            break
        currentNode = currentNode[currentChar]
        if trie.endSymbol in currentNode:
            containedStringns[currentNode[trie.endSymbol]] = True

class Trie:
    def __init__(self):
        self.root = {}
        self.endSymbol = '*'

    def insert(self, string):
        current = self.root
        for i in range(len(string)):
            if string[i] not in current:
                current[string[i]] = {}
            current = current[string[i]]
        current[self.endSymbol] = string