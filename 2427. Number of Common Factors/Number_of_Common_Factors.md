Main Idea

The problem requires finding the number of common factors between two given positive integers. A common factor is an integer that divides both numbers without leaving a remainder.

Constraints:

The input consists of two positive integers, a and b.

The result is the count of numbers that divide both a and b.

Approach:

Brute Force Approach:

Find the minimum of a and b.

Iterate through all numbers from 1 to the minimum value.

Count how many numbers divide both a and b evenly.

Optimized Approach:

Compute the greatest common divisor (GCD) of a and b.

Count the divisors of the GCD, as they are the common factors.

Example

Example 1:

Input:

a = 12, b = 6

Output:

4

Explanation: The common factors are {1, 2, 3, 6}.

Example 2:

Input:

a = 25, b = 30

Output:

2

Explanation: The common factors are {1, 5}.

