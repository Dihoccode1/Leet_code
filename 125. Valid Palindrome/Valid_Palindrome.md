# Palindrome String Checker

## Main Idea
This algorithm checks whether a given string is a palindrome, ignoring non-alphanumeric characters and considering case insensitivity. A palindrome is a string that reads the same forward and backward.

### Approach:
1. Use two pointers: `left` starting from the beginning and `right` from the end.
2. Ignore non-alphanumeric characters using `isalnum()`.
3. Convert characters to lowercase using `tolower()` before comparing.
4. If any mismatch is found, return `false`.
5. If all characters match, return `true`.

## Examples

### Example 1:
**Input:**
```cpp
Solution sol;
bool result = sol.isPalindrome("A man, a plan, a canal: Panama");
```
**Output:**
```cpp
true
```
**Explanation:** Ignoring punctuation and spaces, "amanaplanacanalpanama" is a palindrome.

### Example 2:
**Input:**
```cpp
Solution sol;
bool result = sol.isPalindrome("race a car");
```
**Output:**
```cpp
false
```
**Explanation:** Ignoring spaces, "raceacar" is not a palindrome.

## Complexity Analysis
- **Time Complexity:** O(N), where N is the length of the string (each character is checked once).
- **Space Complexity:** O(1), as only a few extra variables are used.

