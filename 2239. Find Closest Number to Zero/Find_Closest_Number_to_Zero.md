## Main Idea
To find the number closest to zero, we can follow these steps:

1. Initialize `closest` with the first element of the array.
2. Iterate through the array:
   - If the absolute value of the current number is smaller than the absolute value of `closest`, update `closest`.
   - If the absolute value of the current number is equal to the absolute value of `closest`, but the current number is positive, update `closest`.
3. Return the `closest` number found.
### Example 1:
**Input:** nums = [1, 2, 3, 4, 5]  
**Output:** 1  
**Explanation:** The number closest to zero is `1`.

### Example 2:
**Input:** nums = [-1, 2, -3, 4, -5]  
**Output:** 1  
**Explanation:** Both `-1` and `1` have the same absolute difference from zero, but we return the positive one, which is `1`.

### Example 3:
**Input:** nums = [5, -5, 10, -10]  
**Output:** 5  
**Explanation:** Both `5` and `-5` have the same absolute difference from zero, but we return the positive one, which is `5`.
