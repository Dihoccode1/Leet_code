# Remove Duplicates from Sorted Array

## Main Idea
This algorithm removes duplicate elements from a sorted array in-place and returns the new length of the array after duplicates have been removed.

### Approach:
1. Use two pointers:
   - `i` to track the current unique element.
   - `j` to iterate through the array.
2. If `nums[j] == nums[i]`, remove `nums[j]` from the array using `erase()`.
3. If `nums[j]` is different from `nums[i]`, move `i` to `j` and increment `j`.
4. The process continues until the end of the array is reached.
5. Return the new size of the modified array.

## Examples

### Example 1:
**Input:**
```cpp
Solution sol;
vector<int> nums = {1, 1, 2};
int result = sol.removeDuplicates(nums);
```
**Output:**
```cpp
2
```
**Explanation:** The modified `nums` becomes `{1, 2}`.

### Example 2:
**Input:**
```cpp
Solution sol;
vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
int result = sol.removeDuplicates(nums);
```
**Output:**
```cpp
5
```
**Explanation:** The modified `nums` becomes `{0, 1, 2, 3, 4}`.

## Complexity Analysis
- **Time Complexity:** O(N²), since `erase()` shifts elements in an O(N) operation.
- **Space Complexity:** O(1), as the removal is done in-place without extra storage.

## Optimization Suggestion
Instead of using `erase()`, which is costly, we can optimize the algorithm using a two-pointer approach to shift elements without deletion, reducing time complexity to O(N).

