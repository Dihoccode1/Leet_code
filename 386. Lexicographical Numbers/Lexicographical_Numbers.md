# Lexicographical Numbers - Main Idea and Examples

## Main Idea

This solution generates numbers from 1 to n in lexicographical (dictionary) order by:

1. **Generating all numbers**: First creates a vector of integers from 1 to n
2. **String conversion**: Converts each number to its string representation
3. **Lexicographical sorting**: Sorts these strings alphabetically
4. **Conversion back to integers**: Converts the sorted strings back to integers

While this approach works, it's not the most efficient (O(n log n) time and O(n) space). A more optimal approach would use DFS-style number generation (O(n) time and O(1) space).

## Examples

### Example 1 (n = 13)
Input: `n = 13`
Process:
1. Generates numbers [1,2,3,4,5,6,7,8,9,10,11,12,13]
2. Converts to strings ["1","2","3","4","5","6","7","8","9","10","11","12","13"]
3. Sorts lexicographically ["1","10","11","12","13","2","3","4","5","6","7","8","9"]
4. Converts back to [1,10,11,12,13,2,3,4,5,6,7,8,9]

**Output**: `[1,10,11,12,13,2,3,4,5,6,7,8,9]`

### Example 2 (n = 5)
Input: `n = 5`
Process:
1. Generates [1,2,3,4,5]
2. Converts to ["1","2","3","4","5"]
3. Already sorted (no change)
4. Returns [1,2,3,4,5]

**Output**: `[1,2,3,4,5]`

### Example 3 (n = 21)
Input: `n = 21`
Key Observations:
- "1" comes before "10" which comes before "11"..."19","2","20","21","3",etc.
- Numbers starting with '1' appear first, then '2', etc.

**Output**: `[1,10,11,12,13,14,15,16,17,18,19,2,20,21,3,4,5,6,7,8,9]`

## Optimization Opportunity

A more efficient approach would simulate the lexicographical order by:
1. Starting with 1
2. Multiplying by 10 until > n (1 → 10 → 100)
3. Then incrementing (100 → 101)
4. Dividing by 10 when necessary (109 → 11)

This would avoid string conversions and sorting, running in O(n) time with O(1) space (excluding output storage).
