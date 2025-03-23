Sign of Product of Array

Main Idea

The given C++ solution determines the sign of the product of all elements in an array . Instead of computing the actual product (which may cause overflow), the approach counts the number of negative numbers and checks for the presence of zero:

If any element is zero, the product is zero (return ).

Count the number of negative numbers in the array.

If the count of negative numbers is even, the product is positive (return ). Otherwise, the product is negative (return ).

Examples

Example 1

Input:

nums = [-1, -2, -3, -4, 3, 2, 1]

Output:

1

Explanation:

Number of negative numbers = 4 (even)
Product sign = 1 (positive)

Example 2

Input:

nums = [1, 5, 0, 2, -3]

Output:

0

Explanation:

A zero is present, so the product is 0.

Example 3

Input:

nums = [-1, 2, -3, 4]

Output:

-1

Explanation:

Number of negative numbers = 2 (odd)
Product sign = -1 (negative)

Complexity Analysis

Time Complexity: , where  is the size of the array, as each element is checked once.

Space Complexity: , since only a few integer variables are used.

Optimization

The solution is already optimal as it avoids direct multiplication, preventing overflow. Further optimizations are unnecessary.

