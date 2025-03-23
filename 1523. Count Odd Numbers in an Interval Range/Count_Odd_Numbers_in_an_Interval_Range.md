Counting Odd Numbers in a Range

Main Idea

The given C++ solution counts the number of odd numbers within a given range . The approach iterates through each number in the range and checks if it is odd using the condition . If the condition holds, the count is incremented.

Examples

Example 1

Input:

low = 3, high = 7

Output:

3

Explanation:

Odd numbers in the range [3,7]: 3, 5, 7
Total count: 3

Example 2

Input:

low = 8, high = 10

Output:

1

Explanation:

Odd numbers in the range [8,10]: 9
Total count: 1

Complexity Analysis

Time Complexity: , where  is the range size , as each number is checked individually.

Space Complexity: , as only a single integer variable is used for counting.

Optimization

A more efficient approach uses a mathematical formula:

count = (high + 1) / 2 - (low / 2)

This directly calculates the number of odd numbers in the range without iterating through every number, reducing time complexity to .

