Main Idea

The problem requires merging two strings alternately. Characters from both strings are appended one by one in an alternating manner. If one string is longer, the remaining characters are added at the end.

Constraints:

The input consists of two strings, word1 and word2.

The output is a merged string following an alternating pattern.

Approach:

Two Pointers Technique:

Use two pointers to track the current position in word1 and word2.

Append characters alternately from both strings.

If one string is longer, append the remaining characters.

Example

Example 1:

Input:

word1 = "abc", word2 = "pqr"

Output:

"apbqcr"

Explanation: The characters are merged alternately.

Example 2:

Input:

word1 = "ab", word2 = "pqrs"

Output:

"apbqrs"

Explanation: After merging alternately, "rs" remains and is added at the end.
