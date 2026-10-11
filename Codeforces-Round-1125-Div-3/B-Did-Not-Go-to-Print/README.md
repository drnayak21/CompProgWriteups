# B - Did Not Go to Print

## Problem Statement

There are `N` documents numbered from `1` to `N`. The printer receives `N` commands represented by a string `S`.

- `1`: Store the current document in printer memory.
- `2`: Print the topmost document in memory and remove it. If memory is empty, print the current document.
- `3`: Print the current document directly.

Find the documents that were never printed.

## Input

The first line contains an integer `t`, the number of test cases.

For each test case, the first line contains an integer `N`, the number of documents. The second line contains a string `S` of length `N`, consisting of `1`, `2`, and `3`.

## Output

For each test case, print the number of documents that were not printed. On the next line, print their indices in increasing order, separated by spaces. If no documents remain unprinted, print an empty line.

## Sample Input

```text
6
2
12
2
13
2
23
6
112332
3
112
6
211213
```

## Sample Output

```text
1
2
1
1
0

2
3 6
2
1 3
3
2 4 5
```
