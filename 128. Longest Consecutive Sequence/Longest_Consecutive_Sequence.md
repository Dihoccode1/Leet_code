# Longest Consecutive Sequence

## Main Idea
The problem requires finding the length of the longest consecutive elements sequence in an unsorted array of integers. The approach used in the given C++ solution follows these steps:

1. **Edge Case Handling**: If the input array is empty, return 0.
2. **Sorting**: First, sort the array to bring consecutive numbers next to each other.
3. **Iterate through the Sorted Array**:
   - If the current number is the same as the previous one, continue (skip duplicates).
   - If the current number is exactly one greater than the previous, increase the current consecutive sequence length.
   - Otherwise, update the maximum length and reset the current length to 1.
4. **Final Comparison**: Return the maximum length found during iteration.

The time complexity of this approach is **O(n log n)** due to sorting, and the space complexity is **O(1)** if sorting in place.

## Examples

### Example 1:
**Input:**
```cpp
vector<int> nums = {100, 4, 200, 1, 3, 2};
```
**Sorted Array:** `{1, 2, 3, 4, 100, 200}`

**Processing:**
- Sequence `{1, 2, 3, 4}` → length = 4
- No other consecutive sequences longer than 4

**Output:** `4`

### Example 2:
**Input:**
```cpp
vector<int> nums = {0,3,7,2,5,8,4,6,0,1};
```
**Sorted Array:** `{0, 0, 1, 2, 3, 4, 5, 6, 7, 8}`

**Processing:**
- Sequence `{0, 1, 2, 3, 4, 5, 6, 7, 8}` → length = 9

**Output:** `9`

