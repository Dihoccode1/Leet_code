## Main Idea
The binary search algorithm works as follows:

1. Initialize two pointers:
   - `left_index = 0` (start of the array).
   - `right_index = size - 1` (end of the array).
2. While `left_index <= right_index`:
   - Compute `mid_index = (left_index + right_index) / 2`.
   - If `nums[mid_index] == target`, return `mid_index` (target found).
   - If `target < nums[mid_index]`, update `right_index = mid_index - 1` (search the left half).
   - Otherwise, update `left_index = mid_index + 1` (search the right half).
3. If the loop ends without finding the target, return `-1` (target not found).
## Example 1:
**Input:**
```cpp
vector<int> nums = {-1, 0, 3, 5, 9, 12};
int target = 9;
Execution Steps:

1.Initialize left_index = 0, right_index = 5.

2.Compute mid_index = (0 + 5) / 2 = 2.

nums[2] = 3 < target = 9, so update left_index = 3.

3.Compute mid_index = (3 + 5) / 2 = 4.

nums[4] = 9 == target = 9, so return 4.
Output :4
Example 2:
Input:

cpp
Copy
vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
int target = 4;
1.Execution Steps:

2.Initialize left_index = 0, right_index = 6.

3.Compute mid_index = (0 + 6) / 2 = 3.

nums[3] = 4 == target = 4, so return 3.

Output: 3
Example 3:
Input:
vector<int> nums = {2, 5, 7, 10, 15, 20};
int target = 8;
Execution Steps:
1.Initialize left_index = 0, right_index = 5.

2.Compute mid_index = (0 + 5) / 2 = 2.

nums[2] = 7 < target = 8, so update left_index = 3.

3.Compute mid_index = (3 + 5) / 2 = 4.

nums[4] = 15 > target = 8, so update right_index = 3.

4.Compute mid_index = (3 + 3) / 2 = 3.

nums[3] = 10 > target = 8, so update right_index = 2.

Now, left_index = 3 > right_index = 2, so the loop ends.

Output: -1 (target not found)
