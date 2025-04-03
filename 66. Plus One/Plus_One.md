# Plus One Algorithm in C++

## 📌 Main Idea
The given C++ code implements a function that increments a number represented as an array of digits. This problem is commonly encountered in coding interviews and is a simple example of handling carry propagation in addition.

### **Algorithm Overview**
1. **Increment the last digit**: Increase the last element of the array by `1`.
2. **Handle carry propagation**: If a digit becomes `10`, set it to `0` and carry the `1` to the previous digit.
3. **Handle leading carry**: If the first digit becomes `10`, set it to `0` and insert `1` at the beginning of the array.

## 📝 Examples
### **Example 1**
#### **Input:**
```
{1, 2, 3}
```
#### **Process:**
- Increment last digit: `{1, 2, 4}`
- No carry needed.
#### **Output:**
```
{1, 2, 4}
```

### **Example 2**
#### **Input:**
```
{9, 9, 9}
```
#### **Process:**
1. `{9, 9, 10}` → Last digit becomes `0`, carry `1`.
2. `{9, 10, 0}` → Second last digit becomes `0`, carry `1`.
3. `{10, 0, 0}` → First digit becomes `0`, carry `1`.
4. `{1, 0, 0, 0}` → Insert `1` at the beginning.
#### **Output:**
```
{1, 0, 0, 0}
```

## 🚀 Complexity Analysis
- **Time Complexity**: `O(n)`, where `n` is the number of digits (worst case: all digits are `9`).
- **Space Complexity**: `O(1)`, as the modifications are done in place except when inserting an extra digit.

---
This approach efficiently handles the **edge cases** like numbers consisting entirely of `9`s while maintaining optimal time complexity. 🎯

