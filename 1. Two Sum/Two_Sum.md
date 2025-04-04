# Two Sum using Hash Map

## Main Idea
The problem is to find two indices in the array `nums` such that the elements at those indices add up to the given `target`. This C++ solution uses a hash map (`unordered_map`) to store previously seen numbers and their indices for quick lookup.

### Approach:
1. **Initialize Hash Map**:
   - Use `unordered_map<int, int>` to store numbers and their corresponding indices.

2. **Iterate Through Array**:
   - For each element `nums[i]`, calculate the complement: `target - nums[i]`.
   - Check if this complement is already in the hash map.
     - If yes, return the stored index and current index `{hashMap[element], i}`.
     - If no, add the current number and its index to the hash map.

3. **Fallback**:
   - If no such pair is found, return an empty vector `{}`.

Time complexity: **O(n)** (each element is processed once)  
Space complexity: **O(n)** (for storing elements in the hash map)

## Examples

### Example 1:
**Input:**
```cpp
vector<int> nums = {2, 7, 11, 15};
int target = 9;
```
**Processing:**
- `2 + 7 = 9`

**Output:** `[0, 1]`

### Example 2:
**Input:**
```cpp
vector<int> nums = {3, 2, 4};
int target = 6;
```
**Processing:**
- `2 + 4 = 6`

**Output:** `[1, 2]`

