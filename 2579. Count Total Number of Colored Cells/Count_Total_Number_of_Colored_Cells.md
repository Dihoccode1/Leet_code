Colored Cells in a Grid

Main Idea

The problem requires finding the number of colored cells in an expanding grid pattern. The approach follows a mathematical formula:

Observing the pattern, we find that the number of colored cells follows the equation:



This formula derives from analyzing the growth of the grid at each step.

Directly applying the formula gives an efficient solution in constant time.

Examples

Example 1:

Input:

n = 1

Processing:Using the formula: 2(1)^2 - 2(1) + 1 = 1Output:

1

Example 2:

Input:

n = 2

Processing:Using the formula: 2(2)^2 - 2(2) + 1 = 5Output:

5

Example 3:

Input:

n = 3

Processing:Using the formula: 2(3)^2 - 2(3) + 1 = 13Output:

13

Complexity Analysis

The formula executes in O(1) time complexity, as it involves only a few arithmetic operations.

Space complexity is O(1) since no extra storage is used beyond simple variables.

