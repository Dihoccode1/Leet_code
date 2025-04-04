# Reverse Vowels in a String - Main Idea and Examples

## Main Idea

This solution reverses only the vowel characters in a string while keeping other characters in their original positions by:

1. **Identifying Vowels**: First collects all vowel positions in the string
2. **Two-Pointer Swap**: Uses start/end pointers to swap vowels from both ends
3. **Case Handling**: Recognizes both uppercase and lowercase vowels (A, E, I, O, U and their lowercase variants)

## Examples

### Example 1
Input: `"hello"`
1. Vowel positions: [1,4] (e, o)
2. Swap e and o
**Output**: `"holle"`

### Example 2
Input: `"leetcode"`
1. Vowel positions: [1,2,5,7] (e, e, o, e)
2. Swap sequence: (1↔7), (2↔5)
**Output**: `"leotcede"`

### Example 3
Input: `"aA"`
1. Vowel positions: [0,1] (a, A)
2. Swap a and A
**Output**: `"Aa"`

### Example 4
Input: `"xyz"`
1. No vowels found
2. No swaps performed
**Output**: `"xyz"`

## Key Features

1. **Efficient Vowel Detection**: The `isVowel` helper function checks for all vowel cases
2. **In-Place Modification**: Swaps vowels directly in the original string
3. **Two-Pointer Technique**: Optimal O(n) time complexity with O(k) space (k = number of vowels)
