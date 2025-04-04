Main Idea
This solution finds the intersection of two arrays (common elements including duplicates) using:

Sorting: Both arrays are first sorted to enable efficient comparison

Two-pointer technique:

Compares elements from both arrays simultaneously

When elements match, adds to result and advances both pointers

Advances the pointer pointing to the smaller value when elements don't match

Duplicate handling: Naturally preserves duplicate matches by only advancing pointers when matches are found

Examples
Example 1
Input: nums1 = [1,2,2,1], nums2 = [2,2]

After sorting: [1,1,2,2] and [2,2]

Finds two matches at value 2
Output: [2,2]

Example 2
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]

After sorting: [4,5,9] and [4,4,8,9,9]

Finds matches at 4 and 9 (one each)
Output: [4,9]

Example 3
Input: nums1 = [1,2,2,1], nums2 = [2]

After sorting: [1,1,2,2] and [2]

Finds one match at value 2
Output: [2]
