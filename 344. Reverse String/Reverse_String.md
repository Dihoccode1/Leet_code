


Main Idea

The problem requires reversing a given string in-place using a two-pointer approach. The approach involves:

Initializing two pointers: left at the start and right at the end of the string.

Swapping the characters at these positions.

Moving left forward and right backward until they meet.

Examples

Example 1:

Input:

s = ['h', 'e', 'l', 'l', 'o']

Processing:Swaps:

h ↔ o → ['o', 'e', 'l', 'l', 'h']

e ↔ l → ['o', 'l', 'l', 'e', 'h']

Output:

['o', 'l', 'l', 'e', 'h']

Example 2:

Input:

s = ['a', 'b', 'c', 'd']

Processing:Swaps:

a ↔ d → ['d', 'b', 'c', 'a']

b ↔ c → ['d', 'c', 'b', 'a']

Output:

['d', 'c', 'b', 'a']

Example 3:

Input:

s = ['r', 'a', 'c', 'e', 'c', 'a', 'r']

Processing:Since it's already a palindrome, the string remains unchanged after applying swaps.

Output:

['r', 'a', 'c', 'e', 'c', 'a', 'r']

Complexity Analysis

The two-pointer approach ensures O(n) time complexity since each character is processed once.

Space complexity is O(1) as the reversal is done in-place without extra storage.

