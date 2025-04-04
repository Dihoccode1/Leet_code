# Power Function (myPow) - Main Idea and Examples

## Main Idea

The `myPow` function calculates x raised to the power n (xⁿ) with the following approach:

1. **Positive Exponents**: Directly compute xⁿ using the built-in `pow` function when n is positive
2. **Negative Exponents**: Compute the reciprocal of x raised to the absolute value of n (1/x⁻ⁿ) when n is negative
3. **Zero Exponent**: Return 1.0 for any number raised to the power of 0 (x⁰ = 1)

Key aspects:
- Uses the built-in `pow` function for actual computation
- Handles the special case of negative exponents by taking reciprocals
- Returns results with 5 decimal places precision (as indicated by the 1.00000 return value)

## Examples

### Example 1: Positive Exponent
Input: `x = 2.00000, n = 10`
- Since n > 0, computes pow(2.0, 10)
- **Output**: 1024.00000

### Example 2: Negative Exponent
Input: `x = 2.10000, n = -3`
- Since n < 0, computes 1/pow(2.1, 3)
- Calculation: 1/(2.1 × 2.1 × 2.1) ≈ 1/9.261 ≈ 0.10798
- **Output**: 0.10798

### Example 3: Zero Exponent
Input: `x = 5.00000, n = 0`
- Since n == 0, returns 1.00000
- **Output**: 1.00000

### Example 4: Fractional Base
Input: `x = 0.50000, n = 4`
- Since n > 0, computes pow(0.5, 4)
- Calculation: 0.5 × 0.5 × 0.5 × 0.5 = 0.0625
- **Output**: 0.06250

### Example 5: Edge Case (Large Exponent)
Input: `x = 1.00000, n = 2147483647`
- Any number to any power remains 1.0
- **Output**: 1.00000

Note: While this implementation is correct, it's worth mentioning that a more optimized approach could be implemented using the "exponentiation by squaring" method for better performance with very large exponents.
