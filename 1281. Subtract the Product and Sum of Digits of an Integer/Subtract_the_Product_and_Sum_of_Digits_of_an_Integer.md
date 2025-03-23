Subtract Product and Sum of Digits

Main Idea

The given C++ solution calculates the difference between the product and sum of the digits of a given integer . The approach consists of two main steps:

Compute the product of all digits in .

Compute the sum of all digits in .

Return the difference: .

Examples

Example 1

Input:

n = 234

Output:

15

Explanation:

Product of digits: 2 * 3 * 4 = 24
Sum of digits: 2 + 3 + 4 = 9
Difference: 24 - 9 = 15

Example 2

Input:

n = 4421

Output:

21

Explanation:

Product of digits: 4 * 4 * 2 * 1 = 32
Sum of digits: 4 + 4 + 2 + 1 = 11
Difference: 32 - 11 = 21

Complexity Analysis

Time Complexity: , where  is the number of digits in , as each digit is processed once.

Space Complexity: , since only a few integer variables are used.

Optimization

Since the number of digits in an integer is at most , the function is already efficient and does not require further optimization.

