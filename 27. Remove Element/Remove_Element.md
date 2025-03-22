Main Idea

The problem requires removing all occurrences of a given value in an array in-place and returning the new length of the array. The order of the elements may change, but extra space should not be used.

Constraints:

The input is an integer array nums and an integer val.

The removal should be done in-place with O(1) extra memory.

The relative order of elements can be changed.

Approach:

Two Pointers Technique:

Use one pointer to iterate through the array.

Use another pointer to keep track of the next available position for valid elements.

If the current element is not equal to val, move it to the available position and increment the pointer.

Example

Example 1:

Input:

nums = [3,2,2,3], val = 3

Output:

2, nums = [2,2,_,_]

Explanation: The new length is 2, and the first two elements of nums are 2.

Example 2:

Input:

nums = [0,1,2,2,3,0,4,2], val = 2

Output:

5, nums = [0,1,3,0,4,_,_,_]

Explanation: The new length is 5, and the first five elements of nums are 0, 1, 3, 0, 4.
