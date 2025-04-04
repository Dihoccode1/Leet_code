# Minimum Cuts to Divide a Circle - Main Idea and Examples

## Main Idea

This solution calculates the minimum number of cuts needed to divide a circle into `n` equal slices by considering two cases:

1. **Even `n`**: Cuts can be made through the center (diameters), requiring only `n/2` cuts
2. **Odd `n`**: Each slice needs its own radial cut, requiring `n` cuts
3. **Special Case**: When `n=1` (whole circle), no cuts needed

## Examples

### Example 1 (Even case)
Input: `n = 4`
- Even number → cuts = 4/2 = 2
- Two perpendicular diameters create 4 equal slices
**Output**: 2

### Example 2 (Odd case)
Input: `n = 3`
- Odd number → cuts = 3
- Three radial cuts at 120° intervals needed
**Output**: 3

### Example 3 (Edge case)
Input: `n = 1`
- Whole circle needs no cuts
**Output**: 0

### Example 4 (Large even)
Input: `n = 100`
- Even number → cuts = 100/2 = 50
**Output**: 50

### Example 5 (Large odd)
Input: `n = 101`
- Odd number → cuts = 101
**Output**: 101
