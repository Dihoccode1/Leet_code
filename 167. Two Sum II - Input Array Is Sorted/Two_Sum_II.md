Two Sum - Sorted Array

Main Idea

The problem requires finding two numbers in a sorted array that sum up to a given target. The approach involves:

Using two pointers: one at the beginning (left) and one at the end (right) of the array.

Calculating the sum of the elements at these pointers.

If the sum equals the target, return the 1-based indices of these two elements.

If the sum is greater than the target, move the right pointer left.

If the sum is smaller than the target, move the left pointer right.

Repeat until the correct pair is found.

Examples

Example 1:

Input:

numbers = [2, 7, 11, 15], target = 9

Processing:Initial pointers: left = 0, right = 3Sum of numbers[0] + numbers[3] = 2 + 15 = 17 (too large)Move right to index 2Sum of numbers[0] + numbers[2] = 2 + 11 = 13 (too large)Move right to index 1Sum of numbers[0] + numbers[1] = 2 + 7 = 9 (matches target)Output:

[1, 2]

Example 2:

Input:

numbers = [1, 3, 4, 5, 7, 10, 11], target = 9

Processing:Initial pointers: left = 0, right = 6Sum of numbers[0] + numbers[6] = 1 + 11 = 12 (too large)Move right to index 5Sum of numbers[0] + numbers[5] = 1 + 10 = 11 (too large)Move right to index 4Sum of numbers[0] + numbers[4] = 1 + 7 = 8 (too small)Move left to index 1Sum of numbers[1] + numbers[4] = 3 + 7 = 9 (matches target)Output:

[2, 5]

Complexity Analysis

The two-pointer approach ensures O(n) time complexity since each element is processed at most once.

Space complexity is O(1) as only two pointers are used for tracking indices.

