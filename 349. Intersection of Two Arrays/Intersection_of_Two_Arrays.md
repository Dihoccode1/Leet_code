Main Idea
This solution finds the intersection of two arrays (common elements) using:

Sorting: Both arrays are sorted to enable efficient comparison

Two-pointer technique:

Compares elements from both arrays

When elements match, adds to result and moves both pointers

Otherwise, moves the pointer pointing to the smaller value

Duplicate handling: Uses a set to remove duplicate values from the result

Examples
Example 1
Input: nums1 = [1,2,2,1], nums2 = [2,2]

After sorting: [1,1,2,2] and [2,2]

Intersection found at value 2
Output: [2]

Example 2
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]

After sorting: [4,5,9] and [4,4,8,9,9]

Intersections found at values 4 and 9
Output: [4,9]

Example 3
Input: nums1 = [1,3,5], nums2 = [2,4,6]

No common elements
Output: []

Key Features
Time Complexity: O(n log n) due to sorting (where n is the length of the longer array)

Space Complexity: O(k) for the result (k being number of unique intersections)

Duplicate Handling: The set ensures only unique values are returned

Efficient Comparison: The two-pointer approach minimizes unnecessary comparisons
