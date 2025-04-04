# Jump Game - Main Idea and Examples

## Main Idea

This solution checks if you can reach the last index of an array by:
1. Tracking the farthest position reachable (`max_jump`)
2. At each step:
   - If current position exceeds `max_jump`, return false (can't progress)
   - Update `max_jump` to be the maximum of its current value or current position + jump value
   - If `max_jump` reaches/exceeds last index, return true

## Examples

### Example 1 (Can reach end)
Input: `nums = [2,3,1,1,4]`
- Start at index 0 (max_jump = 0+2 = 2)
- Index 1: max_jump = max(2,1+3) = 4 (reaches end)
**Output**: true

### Example 2 (Cannot reach end)
Input: `nums = [3,2,1,0,4]`
- Index 0: max_jump = 3
- Index 1: max_jump = max(3,1+2) = 3
- Index 2: max_jump = max(3,2+1) = 3
- Index 3: max_jump remains 3 (can't progress beyond)
**Output**: false

### Example 3 (Single element)
Input: `nums = [0]`
- Already at last index
**Output**: true
