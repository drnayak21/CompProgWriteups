# A. Subset Selecting — Write-up

## Observations
- The mex requires consecutive values starting from `0` to appear among the group maximums.
- If `0` is absent from the array, the answer is `0`.
- Each group requires at least `k` elements, and elements cannot be reused.

## Approach
1. Count each value's frequency using `f`.
2. If all elements are non-zero, output `0`.
3. Initialize `avail = 0` and `cu = 0`.
4. Process consecutive values starting from `0`. Add each frequency to `avail`.
5. If `avail >= k`, subtract `k` and increment `cu`; otherwise, stop.
6. Print `cu`.

## Complexity
- **TC:** O(n) per test case.
- **SC:** O(n).
