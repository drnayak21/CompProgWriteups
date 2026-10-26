# A. Subset Selecting

**Problem:** Given an array of `n` integers and an integer `k`, divide some elements into disjoint groups, each containing at least `k` elements. Maximize the mex of the groups' maximum elements.

## Input

The first line contains an integer `t` (`1 ≤ t ≤ 500`), representing the number of test cases.

Each test case consists of:
- The first line contains two integers `n` and `k` (`1 ≤ k ≤ n ≤ 100`), representing the array length and the minimum number of elements required in each group.
- The second line contains `n` integers `a₁, a₂, ..., aₙ` (`0 ≤ aᵢ ≤ n`), representing the array elements.

## Output

For each test case, print a single integer representing the maximum possible mex of the collection of group maximums.

## Sample Input

```text
6
3 1
0 2 1
4 2
1 2 3 4
5 2
0 1 0 1 0
5 4
0 0 1 0 0
5 1
4 0 0 0 2
6 2
0 0 2 1 0 0
```

## Sample Output

```text
3
0
2
1
1
3
```
