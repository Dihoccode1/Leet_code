Main Idea
This solution calculates the maximum wealth among all customers in a bank account system by:

Wealth Calculation: For each customer (represented by a row in the 2D vector), it:

Initializes a sum variable to 0

Iterates through all their accounts (columns in the row)

Accumulates the total wealth for that customer

Stores each customer's total wealth in a wealth vector

Finding Maximum: Uses max_element to find and return the highest value in the wealth vector

Examples
Example 1
Input: accounts = [[1,2,3],[3,2,1]]

Customer 1 wealth: 1+2+3 = 6

Customer 2 wealth: 3+2+1 = 6

wealth vector: [6, 6]
Output: 6

Example 2
Input: accounts = [[1,5],[7,3],[3,5]]

Customer 1 wealth: 1+5 = 6

Customer 2 wealth: 7+3 = 10

Customer 3 wealth: 3+5 = 8

wealth vector: [6, 10, 8]
Output: 10

Example 3
Input: accounts = [[2,8,7],[7,1,3],[1,9,5]]

Customer 1 wealth: 2+8+7 = 17

Customer 2 wealth: 7+1+3 = 11

Customer 3 wealth: 1+9+5 = 15

wealth vector: [17, 11, 15]
Output: 17

Key Insights
Time Complexity: O(n*m) where n is number of customers and m is accounts per customer

Space Complexity: O(n) for storing wealth of each customer

STL Usage: Efficiently uses max_element to find maximum value

Edge Cases: Naturally handles empty accounts (returns 0) and single customer cases
