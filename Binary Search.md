Main Idea:

Binary Search is an efficient algorithm used to find a target value in a sorted array. The algorithm works by repeatedly dividing the search interval in half until the target is found or the interval is empty.

Steps:

1.Initialize left_index = 0 and right_index = size - 1.

2.While left_index <= right_index:

  Compute mid_index = (left_index + right_index) / 2.

  If nums[mid_index] == target, return mid_index.

  If target < nums[mid_index], update right_index = mid_index - 1.

  Otherwise, update left_index = mid_index + 1.

3.If the loop ends without finding the target, return -1.
Examples:
Example 1:
vector<int> nums = {-1, 0, 3, 5, 9, 12};
int target = 9;
Output =4
Example 2:
vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
int target = 4;
Output = 3
Example 3:
vector<int> nums = {2, 5, 7, 10, 15, 20};
int target = 8;
Output =-1
