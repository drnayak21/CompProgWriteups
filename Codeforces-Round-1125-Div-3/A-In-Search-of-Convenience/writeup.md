## Observation

The distance condition is satisfied when `(x - i) * (x - i) + (y - j) * (y - j) = R * R`.

## Approach

For each test case, start checking points from `x + R` to `x - R` and so for each point we check `y + R` to `y - R`. If a point satisfies the distance condition, print its coordinates and set `found` to `true`. The loops stop once a valid point is found.

## Complexity

Time: O(R²) per test case.

Space: O(1) extra space.
