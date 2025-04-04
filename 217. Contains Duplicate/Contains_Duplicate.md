# Check for Duplicates in an Array

## Main Idea
The problem requires checking whether any value appears more than once in an array of integers. The provided C++ solution uses a map-based approach to count the frequency of elements.

### Approach:
1. **Count Occurrences**:
   - Use a `map<int, int>` to store the number of times each value appears in the array `nums`.
   - Traverse the array once and increment the count for each number.

2. **Check for Duplicates**:
   - Traverse the array again and check if any number has a frequency greater than `1`.
   - If found, return `true` immediately.

3. **Return Result**:
   - If no duplicates are found, return `false`.

The time complexity is **O(n)** and the space complexity is **O(n)** due to the use of a map for storing frequencies.

## Examples

### Example 1:
**Input:**
```cpp
vector<int> nums = {1, 2, 3, 1};
```
**Processing:**
- Frequency map: `{1: 2, 2: 1, 3: 1}`
- Duplicate found: `true`

**Output:** `true`

### Example 2:
**Input:**
```cpp
vector<int> nums = {1, 2, 3, 4};
```
**Processing:**
- Frequency map: `{1: 1, 2: 1, 3: 1, 4: 1}`
- No duplicates found

**Output:** `false`

