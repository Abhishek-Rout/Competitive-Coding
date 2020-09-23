#include <iostream>
#include <cmath>
#include <float.h>

using namespace std;

class Node {
	public:
		int value;
		Node *prev;
		Node *next;
		Node(int value);
};

class DoublyLinkedList {
	public:
		Node *head;
		Node *tail;
		DoublyLinkedList() {
			head = NULL;
			tail = NULL;
		}

// O(1) time | O(1) space

void setHead(Node *node) {
	if (head == NULL) {
		head = node;
		tail = node;
		return;
	}
	insertBefore(head, node);
}