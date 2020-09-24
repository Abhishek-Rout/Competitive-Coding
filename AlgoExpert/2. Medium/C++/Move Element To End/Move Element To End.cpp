#include <iostream>
#include <vector>

using namespace std;

// O(n) time | O(1) space - where n is the length of the array

vector<int> moveElementToEnd(vector<int> array, int toMove) {
	int i = 0;
	int j = array.size() - 1;
	while (i < j) {
		while (i < j && array[j] == toMove)
			j--;
		if (array[i] == toMove)
			swap(array[i], array[j]);
		i++;
	}
	return array;
}