# Integer Square Root - Main Idea and Examples

## Main Idea

This solution calculates the integer square root of a number `x` (the largest integer whose square is less than or equal to `x`) using binary search:

1. **Initialization**: Sets search range between `l = 0` and `r = x`
2. **Binary Search**:
   - Calculates middle point `middle = l + (r - l)/2` (avoids overflow)
   - Uses `1ll*middle*middle` to prevent integer overflow during multiplication
   - Compares `middle²` with `x`:
     - If equal: returns `middle`
     - If less: searches right half (`l = middle + 1`)
     - If greater: searches left half (`r = middle - 1`)
3. **Termination**: Returns `r` when loop ends (floor of square root)

## Examples

### Example 1 (x = 4)
- Initial range: [0, 4]
- Middle = 2 → 2² = 4 == 4
**Output**: 2

### Example 2 (x = 8)
- Initial range: [0, 8]
- Iterations:
  - Middle = 4 → 16 > 8 → r = 3
  - Middle = 1 → 1 < 8 → l = 2
  - Middle = 2 → 4 < 8 → l = 3
  - Middle = 3 → 9 > 8 → r = 2
- Loop ends (l > r)
**Output**: 2 (since 2² = 4 ≤ 8 and 3² = 9 > 8)

### Example 3 (x = 1)
- Initial range: [0, 1]
- Middle = 0 → 0 < 1 → l = 1
- Middle = 1 → 1 == 1
**Output**: 1

### Example 4 (x = 2147395599)
- Correctly handles large numbers due to 1ll casting
- Returns 46339 (since 46339² = 2147392921 ≤ 2147395599)
- Next number 46340² = 2147395600 > x

## Key Insights

1. **Overflow Prevention**: Uses `1ll*middle*middle` to ensure 64-bit multiplication
2. **Efficiency**: O(log n) time complexity - optimal for this problem
3. **Termination Condition**: Returns `r` which naturally becomes the floor value
4. **Exact Match Handling**: Immediately returns when perfect square is found

## Edge Cases Handled

- x = 0 → returns 0
- x = 1 → returns 1
- Large x values (up to 2³¹-1) → works correctly
- Non-perfect squares → returns floor value
