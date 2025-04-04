# Majority Element - Main Idea and Examples

## Main Idea

The Majority Element problem requires finding an element that appears more than ⌊n/2⌋ times in an array (where n is the array size). The solution uses a hash map to count occurrences of each element, then checks which element (if any) meets the majority criterion.

Key aspects of this approach:
1. **Frequency Counting**: We use a map (hash table) to count how many times each number appears in the array
2. **Threshold Calculation**: The majority threshold is set at half the array length (n/2)
3. **Linear Search**: After counting, we simply check which element's count exceeds this threshold

This approach guarantees finding the majority element if one exists, with:
- Time Complexity: O(n) for the counting pass
- Space Complexity: O(n) for storing the frequency counts

## Examples

### Example 1
Input: `nums = [3,2,3]`
- Map becomes: {3:2, 2:1}
- Threshold: 3/2 = 1
- Element 3 appears 2 times (>1)
- **Output**: 3

### Example 2
Input: `nums = [2,2,1,1,1,2,2]`
- Map becomes: {2:4, 1:3}
- Threshold: 7/2 = 3
- Element 2 appears 4 times (>3)
- **Output**: 2

### Example 3
Input: `nums = [1,3,3,3,2]`
- Map becomes: {1:1, 3:3, 2:1}
- Threshold: 5/2 = 2
- Element 3 appears 3 times (>2)
- **Output**: 3

### Example 4 (No Majority)
Input: `nums = [1,2,3]`
- Map becomes: {1:1, 2:1, 3:1}
- Threshold: 3/2 = 1
- No element appears >1 times
- **Output**: -1 (though problem states majority exists)

Note: The problem guarantees a majority element exists, so the return -1 case won't actually occur in valid test cases.
