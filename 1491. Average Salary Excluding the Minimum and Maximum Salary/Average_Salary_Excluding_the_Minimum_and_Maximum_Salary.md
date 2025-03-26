

Main Idea

The problem requires calculating the average salary after excluding the minimum and maximum salaries from the given list. The approach involves:

Sorting the array to easily identify and exclude the smallest and largest values.

Iterating through the middle elements (excluding the first and last) to compute their sum.

Calculating the average by dividing the sum by the count of the remaining elements.

Examples

Example 1:

Input:

salary = [4000, 3000, 1000, 2000]

Processing:Sorted array: [1000, 2000, 3000, 4000]Exclude 1000 (minimum) and 4000 (maximum).Sum of remaining values: 2000 + 3000 = 5000Count of remaining values: 2Output:

2500.0

Example 2:

Input:

salary = [6000, 5000, 4000, 3000, 2000, 1000]

Processing:Sorted array: [1000, 2000, 3000, 4000, 5000, 6000]Exclude 1000 (minimum) and 6000 (maximum).Sum of remaining values: 2000 + 3000 + 4000 + 5000 = 14000Count of remaining values: 4Output:

3500.0

Example 3:

Input:

salary = [8000, 9000, 2000, 3000, 6000, 1000]

Processing:Sorted array: [1000, 2000, 3000, 6000, 8000, 9000]Exclude 1000 (minimum) and 9000 (maximum).Sum of remaining values: 2000 + 3000 + 6000 + 8000 = 19000Count of remaining values: 4Output:

4750.0

Complexity Analysis

Sorting takes O(n log n) time.

Iterating through the middle elements takes O(n) time.

Overall, the approach has a time complexity of O(n log n) due to sorting.

