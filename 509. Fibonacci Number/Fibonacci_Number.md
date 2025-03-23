Main Idea

The given C++ solution implements the Fibonacci sequence using a recursive approach. The Fibonacci sequence is defined as:
F(n)=F(n-1)+F(n-2)
with base cases:
F(0)=1
F(1)=1
The recursive function repeatedly calls itself to compute the Fibonacci number for a given , reducing the problem into smaller subproblems until reaching the base cases.

Examples

Example 1

Input:

n = 5

Output:

5

Explanation:

F(5) = F(4) + F(3)
F(4) = F(3) + F(2)
F(3) = F(2) + F(1)
F(2) = F(1) + F(0)
F(1) = 1, F(0) = 0

Final result: .

Example 2

Input:

n = 7

Output:

13

Explanation:

F(7) = 13

Complexity Analysis

Time Complexity:  due to repeated recursive calls.

Space Complexity:  due to recursion stack depth.

Optimization

The recursive solution is inefficient for large . A better approach is to use memoization (top-down) or dynamic programming (bottom-up) to avoid redundant calculations.

