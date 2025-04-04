# Number of Steps to Reduce to Zero - Main Idea and Examples

## Main Idea

This solution counts the steps needed to reduce a number to zero by:
1. If the number is even: divide by 2
2. If the number is odd: subtract 1
3. Increment step count each operation
4. Repeat until number becomes 0

## Examples

### Example 1 (num = 14)
Steps: 14→7→6→3→2→1→0
**Output**: 6

### Example 2 (num = 8)
Steps: 8→4→2→1→0
**Output**: 4

### Example 3 (num = 123)
Steps: 123→122→61→60→30→15→14→7→6→3→2→1→0
**Output**: 12
