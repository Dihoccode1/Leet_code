# Elimination Game - Main Idea and Examples

## Main Idea

This solution solves the elimination game problem using a recursive approach:

1. **Base Case**: When n = 1, the only remaining number is 1
2. **Recursive Case**: 
   - After each elimination pass, the problem reduces to a similar subproblem with n/2 numbers
   - The remaining numbers form an arithmetic sequence with a pattern that can be derived from the smaller subproblem
   - The formula `2 * (n/2 - lastRemaining(n/2) + 1)` calculates the last remaining number based on the solution of the smaller problem

## Examples

### Example 1 (n = 5)
Elimination steps:
1. Left to right: [1,2,3,4,5] → [2,4]
2. Right to left: [2,4] → [2]
**Output**: 2

Recursive calculation:
- lastRemaining(5) = 2*(5/2 - lastRemaining(2) + 1) = 2*(2 - 2 + 1) = 2

### Example 2 (n = 9)
Elimination steps:
1. Left to right: [1,2,3,4,5,6,7,8,9] → [2,4,6,8]
2. Right to left: [2,4,6,8] → [4,8]
3. Left to right: [4,8] → [8]
**Output**: 6

Recursive calculation:
- lastRemaining(9) = 2*(9/2 - lastRemaining(4) + 1) = 2*(4 - 2 + 1) = 6

### Example 3 (n = 6)
Elimination steps:
1. Left to right: [1,2,3,4,5,6] → [2,4,6]
2. Right to left: [2,4,6] → [4]
**Output**: 4

Recursive calculation:
- lastRemaining(6) = 2*(6/2 - lastRemaining(3) + 1) = 2*(3 - 2 + 1) = 4

## Key Insight

The solution leverages the observation that after each elimination pass:
1. The problem size is halved (n → n/2)
2. The remaining numbers form a new sequence that can be derived from the solution to the smaller problem
3. The direction of elimination alternates between left-to-right and right-to-left

## Complexity Analysis

**Time Complexity**: O(log n) - Each recursive call halves the problem size
**Space Complexity**: O(log n) - Due to the recursion stack depth

This elegant recursive solution efficiently solves the problem by breaking it down into smaller subproblems and combining their solutions.
