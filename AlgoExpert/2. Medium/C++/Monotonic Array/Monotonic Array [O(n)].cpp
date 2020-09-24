#include <iostream>

using namespace std;

bool breaksDirection(int direction, int previousInt, int currentInt) {
	int difference = currentInt - previousInt;
	if (direction > 0)
	return difference < 0;
	return difference > 0;
}

// O(n) time | O(1) space - where n is the length of the array

bool isMonotonic(vector<int> array) {
	if (array.size() <= 2)
		return true;
	int direction = array[1] - array[0];
	for (int i = 2; i < array.size(); i++) {
		if (direction == 0) {
			direction = array[i] - array[i - 1];
			continue;
		}
		if (breaksDirection(direction, array[i - 1], array[i]))
			return false;
	}
	return true;
}