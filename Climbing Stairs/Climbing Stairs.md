Main Idea:

The problem follows the Fibonacci sequence pattern where the number of ways to reach the nth step is the sum of ways to reach the (n-1)th and (n-2)th steps. We use dynamic programming to solve this efficiently.

Steps:

1.If n == 1, return 1 (only one way to reach the first step).

2.If n == 2, return 2 (two ways: (1,1) or (2)).

3.Initialize two variables: prev_step = 2 (ways to reach step 2) and prev_prev_step = 1 (ways to reach step 1).

4. Iterate from step 3 to n, updating the number of ways using the sum of the previous two steps.

5.Return the computed number of ways.
Examples:

Example 1:

Input:int n = 2;
Solution sol;
int result = sol.climbStairs(n);
Output:2
Example 2:

Input:int n = 3;
Output: 2
Example 3:

Input:int n= 5;
Output: 8
