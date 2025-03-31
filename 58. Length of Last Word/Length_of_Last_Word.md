# Length of Last Word

## Main Idea
The problem requires finding the length of the last word in a given string. The approach used in the given C++ solution follows these steps:

1. **Splitting the String into Words**:
   - A helper function `splitword()` is defined to break the input string into words using a `stringstream`.
   - Each extracted word is stored in a `vector<string>`.
2. **Retrieving the Last Word**:
   - The function `lengthOfLastWord()` calls `splitword()` to obtain the list of words.
   - The last word in the vector is accessed using `.back()`.
   - The size of the last word is returned as the output.

The time complexity of this approach is **O(n)** (where `n` is the length of the string) since each character is processed once, and the space complexity is **O(m)** (where `m` is the number of words in the string) due to the additional storage in a vector.

## Examples

### Example 1:
**Input:**
```cpp
string s = "Hello World";
```
**Processing:**
- Split words: `{ "Hello", "World" }`
- Last word: `"World"`
- Length: `5`

**Output:** `5`

### Example 2:
**Input:**
```cpp
string s = "   Fly me   to   the moon  ";
```
**Processing:**
- Split words: `{ "Fly", "me", "to", "the", "moon" }`
- Last word: `"moon"`
- Length: `4`

**Output:** `4`
