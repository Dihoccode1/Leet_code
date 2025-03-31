# Check if a Number is a Power of Three

## Main Idea
The problem requires determining whether a given integer `n` is a power of three. The approach used in the given C++ solution follows these steps:

1. **Edge Case Handling**: If `n` is less than or equal to zero, return `false` (since powers of three are positive).
2. **Base Case**: If `n` is exactly `1`, return `true` (since `3^0 = 1`).
3. **Divide by 3 Iteratively**:
   - If `n` is divisible by `3`, repeatedly divide it by `3`.
   - If `n` becomes `1` at the end, it was a power of three.
   - Otherwise, return `false`.

The time complexity of this approach is **O(log n)** because the number is divided by `3` in each step, and the space complexity is **O(1)**.

## Examples

### Example 1:
**Input:**
```cpp
int n = 27;
```
**Processing:**
- `27 ÷ 3 = 9`
- `9 ÷ 3 = 3`
- `3 ÷ 3 = 1` (Stop)

**Output:** `true`

### Example 2:
**Input:**
```cpp
int n = 10;
```
**Processing:**
- `10 ÷ 3 = 3.33` (Not a power of three)

**Output:** `false`

