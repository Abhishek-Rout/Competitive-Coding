class LinkedList:

	def __init__(self, value):
		self.value = value
		self.next = None

# O(n + m) time | O(n + m) space - where n is the number of nodes in t
# Linked List and m is the number of nodes in the second Linked List

def mergeLinkedLists(headOne, headTwo):
	recursiveMerge(headOne, headTwo, None)
	return headOne if headOne.value < headTwo.value else headTwo

def recursiveMerge(p1, p2, p1Prev):
	if p1 is None:
		p1Prev.next = p2
		return
	if p2 is None:
		return

	if p1.value < p2.value:
		recursiveMerge(p1.next, p2, p1)
	else:
		if p1Prev is not None:
			p1Prev.next = p2
		newP2 = p2.next
		p2.next = p1
		recursiveMerge(p1, newP2, p2)