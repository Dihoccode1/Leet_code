# Merge Sorted Arrays

## Main Idea
This algorithm merges two sorted arrays `nums1` and `nums2` into a single sorted array. The merged elements are stored in `nums1`.

### Approach:
1. Use two pointers, `pointer1` and `pointer2`, to iterate through `nums1` (of size `m`) and `nums2` (of size `n`).
2. Compare the elements at `pointer1` and `pointer2`:
   - If `nums1[pointer1] < nums2[pointer2]`, append `nums1[pointer1]` to a temporary `table` and increment `pointer1`.
   - Otherwise, append `nums2[pointer2]` to `table` and increment `pointer2`.
3. If any elements remain in `nums1` or `nums2`, append them to `table`.
4. Copy the merged elements from `table` back to `nums1`.

## Examples

### Example 1:
**Input:**
```cpp
Solution sol;
vector<int> nums1 = {1, 2, 3, 0, 0, 0};
int m = 3;
vector<int> nums2 = {2, 5, 6};
int n = 3;
sol.merge(nums1, m, nums2, n);
```
**Output:**
```cpp
{1, 2, 2, 3, 5, 6}
```
**Explanation:** `nums1` and `nums2` are merged into a sorted array.

### Example 2:
**Input:**
```cpp
Solution sol;
vector<int> nums1 = {1};
int m = 1;
vector<int> nums2 = {};
int n = 0;
sol.merge(nums1, m, nums2, n);
```
**Output:**
```cpp
{1}
```
**Explanation:** `nums2` is empty, so `nums1` remains unchanged.

## Complexity Analysis
- **Time Complexity:** O(m + n), since each element is processed once.
- **Space Complexity:** O(m + n), due to the use of an auxiliary `table` array.

