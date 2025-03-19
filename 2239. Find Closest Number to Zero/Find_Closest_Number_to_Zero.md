Main Idea

Given an array of integers, we need to find the number closest to zero. If there are multiple numbers with the same absolute difference, return the positive one.

Steps

Initialize closest = nums[0] as the first element.

Iterate through the array:

If the absolute value of nums[i] is smaller than closest, update closest.

If the absolute value is the same but nums[i] is positive, update closest.

Return the closest number found.

C++ Implementation

Examples

Example 1

Input:

Execution Steps:

Output: 1

Example 2

Input:

Execution Steps:

Output: 1

Example 3

Input:

Execution Steps:

Output: 5

