Main Idea

The problem requires determining whether a given integer is a palindrome. A number is considered a palindrome if it reads the same forward and backward.

Constraints:

The input is a non-negative integer.

Negative numbers cannot be palindromes because of the leading '-' sign.

Approach:

Convert to String: Convert the number to a string and check if it is equal to its reverse.

Mathematical Approach: Reverse half of the number and compare it with the other half to avoid overflow and unnecessary computations.

Example

Example 1:

Input:

x = 121

Output:

true

Explanation: 121 reads the same forward and backward.

Example 2:

Input:

x = -121

Output:

false

Explanation: -121 becomes 121- when reversed, which is not the same.

Example 3:

Input:

x = 10

Output:

false

Explanation: 10 reversed is 01, which is different from 10.
