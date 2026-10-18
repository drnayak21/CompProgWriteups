### Approach
- If `a <= b`, making sandwiches is impossible because every sandwich needs more cheese than sausage. Print `-1`.
- Otherwise, the maximum number of sandwiches is `min(a-b, b)`.

### Explanation
Each sandwich needs at least one sausage and at least one extra slice of cheese. Therefore, the number of sandwiches cannot exceed either `b` or `a-b`.

Taking the minimum gives the maximum possible number of sandwiches.

### Complexity
- **Time:** O(1) per test case.
- **Space:** O(1).
