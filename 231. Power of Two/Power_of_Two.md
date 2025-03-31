# Check if a Number is a Power of Two

## Main Idea
The problem requires determining whether a given integer `n` is a power of two. The approach used in the given C++ solution follows these steps:

1. **Edge Case Handling**: If `n` is less than or equal to zero, return `false` (since powers of two are positive).
2. **Base Case**: If `n` is exactly `1`, return `true` (since `2^0 = 1`).
3. **Divide by 2 Iteratively**:
   - If `n` is divisible by `2`, repeatedly divide it by `2`.
   - If `n` becomes `1` at the end, it was a power of two.
   - Otherwise, return `false`.

The time complexity of this approach is **O(log n)** because the number is divided by `2` in each step, and the space complexity is **O(1)**.

## Examples

### Example 1:
**Input:**
```cpp
int n = 16;
```
**Processing:**
- `16 ÷ 2 = 8`
- `8 ÷ 2 = 4`
- `4 ÷ 2 = 2`
- `2 ÷ 2 = 1` (Stop)

**Output:** `true`

### Example 2:
**Input:**
```cpp
int n = 18;
```
**Processing:**
- `18 ÷ 2 = 9` (Not a power of two)

**Output:** `false`

