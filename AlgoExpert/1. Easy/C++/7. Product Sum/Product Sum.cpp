#include <iostream>
#include <any>
#include <vector>

using namespace std;

// O(n) time | O(d) space - where n is the total number of elements in
// array, including sub-elements, and d is the greatest depth of "spec
// arrays in the array

int productSum(vector<any> array, int multiplier = 1) {
	int sum = 0;
	for (auto el : array) {
		if (el.type() == typeid(vector<any>)) {
			sum += productSum(any_cast<vector<any>>(el), multiplier + 1);
		} else {
			sum += any_cast<int>(el);
		}
	}
	return sum * multiplier;
}