

Main Idea

The problem requires converting all uppercase letters in a given string to lowercase. The approach involves:

Iterating through each character of the string.

Using the built-in tolower function to convert uppercase characters to lowercase.

Returning the modified string.

Examples

Example 1:

Input:

s = "Hello"

Processing:Convert each character: H -> h, e -> e, l -> l, l -> l, o -> oOutput:

"hello"

Example 2:

Input:

s = "LOVELY"

Processing:Convert each character: L -> l, O -> o, V -> v, E -> e, L -> l, Y -> yOutput:

"lovely"

Example 3:

Input:

s = "hElLo WoRLd"

Processing:Convert each character: h -> h, E -> e, l -> l, L -> l, o -> o, W -> w, o -> o, R -> r, L -> l, d -> dOutput:

"hello world"

Complexity Analysis

Iterating through the string takes O(n) time complexity, where n is the length of the string.

Space complexity is O(1) as the conversion is done in place without using extra memory.

