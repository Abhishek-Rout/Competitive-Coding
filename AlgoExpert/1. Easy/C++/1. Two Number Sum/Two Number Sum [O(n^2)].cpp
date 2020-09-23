#include <iostream>
#include <vector>

using namespace std;

// O(n^2) time | O(1) space

vector<int> twoNumberSum(vector<int> array, int targetSum) 
{
	for (int i = 0; i < array.size() - 1; i++) 
	{
		int firstNum = array[i];
		for (int j = i + 1; j < array.size(); j++) 
		{
			int secondNum = array[j];
			if (firstNum + secondNum == targetSum) 
			{
				return vector<int>{firstNum, secondNum};
			}
		}
	}
	return {};
}