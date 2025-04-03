# Add Digits Algorithm in C++

## 📌 Main Idea
The function `addDigits` continuously sums the digits of an integer until the result is a single-digit number. This process is known as the **digital root** of a number.

### **Algorithm Overview**
1. **Base Case**: If `num` is less than `10`, return `num`.
2. **Summing Digits**:
   - Extract each digit of `num` and sum them up.
   - If the sum is still greater than or equal to `10`, repeat the process.
3. **Recursive Approach**: The function calls itself with the new sum until a single-digit number is obtained.

## 📝 Examples
### **Example 1**
#### **Input:**
```
num = 38
```
#### **Process:**
1. `3 + 8 = 11`
2. `1 + 1 = 2`
#### **Output:**
```
2
```

### **Example 2**
#### **Input:**
```
num = 1234
```
#### **Process:**
1. `1 + 2 + 3 + 4 = 10`
2. `1 + 0 = 1`
#### **Output:**
```
1
```

## 🚀 Complexity Analysis
- **Time Complexity**: `O(log n)`, as the number of digits reduces in each iteration.
- **Space Complexity**: `O(log n)` due to recursive function calls.

---
This approach effectively finds the **digital root** of a number using recursion. Alternatively, the **mathematical formula** `num % 9` can be used for a more optimal solution. 🎯


