# Reverse Integer

## Main Idea
The problem is to reverse the digits of a 32-bit signed integer. The key point is to handle overflow correctly. If reversing the number causes it to go outside the 32-bit signed integer range `[-2^31, 2^31 - 1]`, the function should return `0`.

### Approach:
1. **Initialize `sum` as 0** using `long long` to prevent overflow during calculation.
2. **Reverse Digit-by-Digit**:
   - Extract the last digit of `x` using `x % 10`.
   - Append it to `sum` by `sum = sum * 10 + last_digit`.
   - Remove the last digit from `x` using `x /= 10`.
   - Repeat until `x` becomes 0.
3. **Check for Overflow**:
   - If `sum` exceeds `INT_MAX` or is less than `INT_MIN`, return `0`.
   - Otherwise, cast and return `sum` as an `int`.

Time complexity: **O(log₁₀n)**  
Space complexity: **O(1)**

## Examples

### Example 1:
**Input:**
```cpp
int x = 123;
```
**Processing:**
- Reverse: `321`

**Output:** `321`

### Example 2:
**Input:**
```cpp
int x = -456;
```
**Processing:**
- Reverse: `-654`

**Output:** `-654`

### Example 3:
**Input:**
```cpp
int x = 1534236469;
```
**Processing:**
- Reverse would overflow 32-bit int

**Output:** `0`

