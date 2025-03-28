# Count Primes using Sieve of Eratosthenes

## Main Idea
This algorithm counts the number of prime numbers less than `n` using the Sieve of Eratosthenes, an efficient method for finding all prime numbers up to a given limit.

### Approach:
1. If `n <= 2`, return `0` since there are no prime numbers less than 2.
2. Create a boolean vector `isPrime` of size `n` and initialize all values to `true` (assuming all numbers are prime initially).
3. Set `isPrime[0]` and `isPrime[1]` to `false`, as 0 and 1 are not prime.
4. Iterate from `2` to `sqrt(n)`, and for each prime number `i`, mark all its multiples as non-prime.
5. Count and return the number of `true` values in `isPrime`, which represents the count of prime numbers less than `n`.

## Examples

### Example 1:
**Input:**
```cpp
Solution sol;
int result = sol.countPrimes(10);
```
**Output:**
```cpp
4
```
**Explanation:** The prime numbers less than 10 are `{2, 3, 5, 7}`, so the result is `4`.

### Example 2:
**Input:**
```cpp
Solution sol;
int result = sol.countPrimes(0);
```
**Output:**
```cpp
0
```
**Explanation:** There are no prime numbers less than `0`.

## Complexity Analysis
- **Time Complexity:** O(n log log n), which is optimal for prime counting using the Sieve of Eratosthenes.
- **Space Complexity:** O(n), due to the `isPrime` boolean vector storing the primality status of each number.

