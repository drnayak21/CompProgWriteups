## Observation

Consecutive rainy days form a continuous sequence of `R` characters. A sunny day breaks the streak.

## Approach

Use `count` to track the current rainy streak and `maxrain` to store the longest streak found. Increase `count` for `R`, reset it to `0` for `S`, and update `maxrain` whenever a longer streak is found.

## Complexity

Time: O(N)

Space: O(1) extra space
