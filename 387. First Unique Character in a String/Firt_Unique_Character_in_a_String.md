Main Idea
This solution finds the first non-repeating character in a string by:

Frequency Counting: Uses a hash map to count occurrences of each character

Linear Search: Scans the string again to find the first character with count = 1

Early Termination: Returns immediately when the first unique character is found

Key aspects:

Time Complexity: O(n) - Two passes through the string (one for counting, one for checking)

Space Complexity: O(1) - The map size is bounded by the alphabet size (26 for lowercase English letters)

Examples
Example 1
Input: s = "leetcode"

Frequency map: {'l':1, 'e':3, 't':1, 'c':1, 'o':1, 'd':1}

First character with count 1 is 'l' at index 0

Output: 0

Example 2
Input: s = "loveleetcode"

Frequency map: {'l':2, 'o':2, 'v':1, 'e':4, 't':1, 'c':1, 'd':1}

First unique character is 'v' at index 2

Output: 2

Example 3
Input: s = "aabb"

Frequency map: {'a':2, 'b':2}

No characters with count 1

Output: -1

Example 4
Input: s = "dddccdbba"

Frequency map: {'d':4, 'c':2, 'b':2, 'a':1}

First unique character is 'a' at index 8

Output: 8

Optimization Notes
The current implementation is already efficient, but could be slightly improved by:

Storing both the count and first index in the map to avoid the second string scan

Using a fixed-size array instead of a hash map for better performance with limited character sets
