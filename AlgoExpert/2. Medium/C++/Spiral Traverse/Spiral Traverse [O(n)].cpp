#include <iostream>

using namespace std;

// O(n) time | O(n) space - where n is the total number of eleme

void spiralFill(vector<vector<int>> array, int startRow, int endRow, int startCol, int endCol, vector<int> &result) {

	if (startRow > endRow || startCol > endCol) {
		return;
	}

	for (int col = startCol; col <= endCol; col++) {
		result.push_back(array[startRow][col]);
	}

	for (int row = startRow + 1; row <= endRow; row++) {
		result.push_back(array[row][endCol]);
	}

	for (int col = endCol - 1; col >= startCol; col--) {
		if (startRow == endRow)
			break;
		result.push_back(array[endRow][col]);
	}

	for (int row = endRow - 1; row >= startRow + 1; row--) {
		if (startCol == endCol)
			break;
		result.push_back(array[row][startCol]);
	}

	spiralFill(array, startRow + 1, endRow - 1, startCol + 1, endC
}