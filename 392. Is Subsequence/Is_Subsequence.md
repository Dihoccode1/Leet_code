Main Idea

Given two strings s and t, determine if s is a subsequence of t. A subsequence is a sequence derived from another sequence by deleting some elements without changing the order of the remaining elements.

Steps:

1.Use two pointers, i for s and j for t.

2.Traverse t and check if characters in s appear in order.

3.If all characters of s are found in t in the correct order, return true; otherwise, return false.
### Example 1:
**Input:** s = "abc", t = "ahbgdc"  
**Output:** true  
**Explanation:** The string "abc" is a subsequence of "ahbgdc" because you can delete characters 'h', 'b', and 'g' from "ahbgdc" to get "abc".

### Example 2:
**Input:** s = "axc", t = "ahbgdc"  
**Output:** false  
**Explanation:** The string "axc" is not a subsequence of "ahbgdc" because there is no way to delete characters from "ahbgdc" to get "axc".
