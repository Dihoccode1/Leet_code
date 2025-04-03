# Missing Number Algorithm in C++

## 📌 Main Idea
The function `missingNumber` finds the missing number in an array containing `n` distinct numbers taken from the range `[0, n]`.

### **Algorithm Overview**
1. **Sort the array**: Arrange the numbers in ascending order.
2. **Check for the missing number**:
   - Iterate through the sorted array.
   - If `nums[i]` does not match its expected index `i`, return `i`.
3. **Handle the edge case**: If no number is missing in the sequence, return `n` (the size of the array).

## 📝 Examples
### **Example 1**
#### **Input:**
```
nums = [3, 0, 1]
```
#### **Process:**
1. Sorted array: `[0, 1, 3]`
2. Index `2` is missing.
#### **Output:**
```
2
```

### **Example 2**
#### **Input:**
```
nums = [0, 1]
```
#### **Process:**
1. Sorted array: `[0, 1]`
2. No missing number in sequence → return `2`.
#### **Output:**
```
2
```

## 🚀 Complexity Analysis
- **Time Complexity**: `O(n log n)`, due to sorting.
- **Space Complexity**: `O(1)`, as sorting is done in place.

---
This approach efficiently finds the missing number but can be optimized to `O(n)` using mathematical summation (`n(n+1)/2`) or XOR. 🎯

