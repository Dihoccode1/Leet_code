# Nim Game Algorithm in C++

## 📌 Main Idea
The function `canWinNim` determines whether a player can win the **Nim Game**, given `n` stones.

### **Game Rules**
- Two players take turns removing `1`, `2`, or `3` stones.
- The player who removes the last stone wins.

### **Winning Strategy**
1. If `n <= 3`, the first player can take all stones and win immediately.
2. If `n % 4 == 0`, the first player will **always lose**, because any move leaves a multiple of `4` for the opponent, ensuring their win.
3. Otherwise, the first player can force the opponent into a losing position by reducing the pile to a multiple of `4`.

## 📝 Examples
### **Example 1**
#### **Input:**
```
n = 4
```
#### **Process:**
- `4` is a multiple of `4`, so the first player **loses**.
#### **Output:**
```
false
```

### **Example 2**
#### **Input:**
```
n = 5
```
#### **Process:**
- The first player removes `1` stone, leaving `4`, which is a losing position for the opponent.
#### **Output:**
```
true
```

## 🚀 Complexity Analysis
- **Time Complexity**: `O(1)`, as it only involves simple modulo and conditional checks.
- **Space Complexity**: `O(1)`, as no extra space is used.

---
This strategy ensures optimal gameplay in the **Nim Game** using mathematical properties. 🎯

