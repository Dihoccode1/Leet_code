# Find the Difference - Main Idea and Examples

## Main Idea

This solution finds the extra character added to string `t` (which is a shuffled version of string `s` plus one additional character) by:

1. **Edge Case Handling**: Directly returns the first character if `s` is empty
2. **Sorting**: Sorts both strings to align matching characters
3. **Character Comparison**: Compares characters at each position to find the mismatch

## Examples

### Example 1
Input: `s = "abcd"`, `t = "abcde"`
- After sorting: `s = "abcd"`, `t = "abcde"`
- Compare:
  - a == a
  - b == b
  - c == c
  - d == d
- No mismatch found in loop, return last character 'e'
- **Output**: 'e'

### Example 2
Input: `s = ""`, `t = "y"`
- Edge case: s is empty
- **Output**: 'y'

### Example 3
Input: `s = "a"`, `t = "aa"`
- After sorting: `s = "a"`, `t = "aa"`
- Compare first character: a == a
- Return last character 'a'
- **Output**: 'a'

### Example 4
Input: `s = "ae"`, `t = "aea"`
- After sorting: `s = "ae"`, `t = "aae"`
- Compare:
  - a == a
  - e != a → return 'a'
- **Output**: 'a'

## Analysis

**Time Complexity**: O(n log n) due to sorting
**Space Complexity**: O(1) (or O(n) if considering sorting space)

Note: While this approach works, there are more efficient solutions:
1. Using a frequency count (O(n) time, O(1) space)
2. Using XOR operation (O(n) time, O(1) space)

The current implementation has room for optimization but correctly solves the problem.
