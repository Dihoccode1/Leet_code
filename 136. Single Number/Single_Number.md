# Find the Single Number

## Main Idea
The problem requires finding the element that appears only once in an array where every other element appears exactly twice. The given C++ solution solves the problem using a hash map.

### Approach:
1. **Count Occurrences**:
   - Use a `map<int, int>` to store the frequency of each element in the input vector `nums`.
   - Iterate through the array and update the count for each element.

2. **Find the Unique Element**:
   - Traverse the map to find the key whose value (frequency) is `1`.
   - Return that key as the result.

3. **Fallback**:
   - If no such element is found, return `-1` (though, per the problem constraints, this shouldn't happen).

The time complexity is **O(n)** for traversal and counting, and the space complexity is **O(n)** due to the extra map storage.

## Examples

### Example 1:
**Input:**
```cpp
vector<int> nums = {2, 2, 1};
```
**Processing:**
- Frequency map: `{2: 2, 1: 1}`
- Unique number: `1`

**Output:** `1`

### Example 2:
**Input:**
```cpp
vector<int> nums = {4, 1, 2, 1, 2};
```
**Processing:**
- Frequency map: `{4: 1, 1: 2, 2: 2}`
- Unique number: `4`

**Output:** `4`


