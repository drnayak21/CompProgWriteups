# A - In Search of Convenience

## Problem Statement

You are given a router at integer coordinates `(x0, y0)` with coverage radius `R`. Find any integer coordinate `(x, y)` whose distance from the router is exactly `R`.

In other words:

`(x0 - x)² + (y0 - y)² = R²`

## Input

The first line contains an integer `t`, the number of test cases.

Each test case contains three integers `x0`, `y0`, and `R`.

## Output

For each test case, print any valid integer coordinates `x` and `y`.

## Sample Input

```text
3
0 0 1
5 5 5
10 10 13
```

## Sample Output

```text
0 1
2 1
-2 5
```
