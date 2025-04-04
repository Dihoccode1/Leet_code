Main Idea
This solution checks if a number is a perfect square by:

Calculating the square root of the number

Comparing the square root with its integer cast version

If they match exactly, the number is a perfect square

Examples
Example 1 (Perfect square)
Input: num = 16

sqrt(16) = 4.0

(int)4.0 = 4

4.0 == 4 → true
Output: true

Example 2 (Not perfect square)
Input: num = 14

sqrt(14) ≈ 3.7416

(int)3.7416 = 3

3.7416 ≠ 3 → false
Output: false

Example 3 (Edge case 1)
Input: num = 1

sqrt(1) = 1.0

(int)1.0 = 1

1.0 == 1 → true
Output: true

Example 4 (Edge case 2)
Input: num = 2147395600 (46340²)

sqrt(2147395600) = 46340.0

(int)46340.0 = 46340

46340.0 == 46340 → true
Output: true
