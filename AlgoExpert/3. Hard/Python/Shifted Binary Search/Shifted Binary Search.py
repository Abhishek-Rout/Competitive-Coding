# O(logn) time |  O(1) space
def shiftedBinarySearch(array, target):
    return shiftedBinarySearchHelper(array, target, 0, len(array) - 1)


def shiftedBinarySearchHelper(array, target, left, right):
    while left <= right:
        middle = (left + right) // 2
        potentialMatch = array[middle]
        leftNum = array[left]
        rightNum = array[right]
        if potentialMatch == target:
            return potentialMatch
        elif leftNum <= potentialMatch:
            if target < potentialMatch and target >= leftNum:
                right = middle - 1
            else:
                left = middle + 1
        else:
            if target > potentialMatch and target <= leftNum:
                left = middle + 1
            else:
                right = middle - 1
    return -1