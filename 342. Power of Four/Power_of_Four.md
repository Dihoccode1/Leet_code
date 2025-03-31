# Check if a Number is a Power of Four

## Main Idea
The problem requires determining whether a given integer `n` is a power of four. The approach used in the given C++ solution follows these steps:

1. **Edge Case Handling**: If `n` is less than or equal to zero, return `false` (since powers of four are positive).
2. **Base Case**: If `n` is exactly `1`, return `true` (since `4^0 = 1`).
3. **Divide by 4 Iteratively**:
   - If `n` is divisible by `4`, repeatedly divide it by `4`.
   - If `n` becomes `1` at the end, it was a power of four.
   - Otherwise, return `false`.

The time complexity of this approach is **O(log n)** because the number is divided by `4` in each step, and the space complexity is **O(1)**.

## Examples

### Example 1:
**Input:**
```cpp
int n = 64;
```
**Processing:**
- `64 ÷ 4 = 16`
- `16 ÷ 4 = 4`
- `4 ÷ 4 = 1` (Stop)

**Output:** `true`

### Example 2:
**Input:**
```cpp
int n = 20;
```
**Processing:**
- `20 ÷ 4 = 5` (Not a power of four)

**Output:** `false`
