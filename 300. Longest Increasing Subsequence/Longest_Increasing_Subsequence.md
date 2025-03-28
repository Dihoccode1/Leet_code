# Longest Increasing Subsequence (LIS)

## Main Idea
This algorithm finds the length of the longest increasing subsequence (LIS) in a given array. The LIS is the longest sequence of increasing numbers that can be formed from the given array, maintaining the original order.

### Approach:
1. Create a `lis` array where `lis[i]` stores the length of the LIS ending at index `i`. Initialize all values to `1`.
2. Use a nested loop:
   - The outer loop iterates through each element `nums[i]`.
   - The inner loop checks all previous elements `nums[j]` (where `j < i`).
   - If `nums[i] > nums[j]`, update `lis[i] = max(lis[i], lis[j] + 1)`.
3. The result is the maximum value in the `lis` array, which represents the longest increasing subsequence.

## Examples

### Example 1:
**Input:**
```cpp
Solution sol;
vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
int result = sol.lengthOfLIS(nums);
```
**Output:**
```cpp
4
```
**Explanation:** The LIS is `{2, 3, 7, 101}`.

### Example 2:
**Input:**
```cpp
Solution sol;
vector<int> nums = {0, 1, 0, 3, 2, 3};
int result = sol.lengthOfLIS(nums);
```
**Output:**
```cpp
4
```
**Explanation:** The LIS is `{0, 1, 2, 3}`.

## Complexity Analysis
- **Time Complexity:** O(N²), where N is the length of `nums` (due to the nested loops).
- **Space Complexity:** O(N), as an extra `lis` array is used to store the LIS values.

