# Kids With the Greatest Number of Candies - Main Idea and Examples

## Main Idea

This solution determines which kids can have the greatest number of candies after receiving extra candies by:

1. Finding the maximum candy count among all kids initially
2. Checking for each kid if their candies + extra candies ≥ this maximum
3. Building a boolean vector indicating which kids meet this condition

## Examples

### Example 1
Input: `candies = [2,3,5,1,3]`, `extraCandies = 3`
- Max candies: 5
- Results: [2+3≥5, 3+3≥5, 5+3≥5, 1+3≥5, 3+3≥5]
**Output**: [true,true,true,false,true]

### Example 2
Input: `candies = [4,2,1,1,2]`, `extraCandies = 1`
- Max candies: 4
- Results: [4+1≥4, 2+1≥4, 1+1≥4, 1+1≥4, 2+1≥4]
**Output**: [true,false,false,false,false]

### Example 3
Input: `candies = [12,1,12]`, `extraCandies = 10`
- Max candies: 12
- Results: [12+10≥12, 1+10≥12, 12+10≥12]
**Output**: [true,false,true]
