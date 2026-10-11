## Observation

The printer memory works like a stack. The last document added using command `1` is the first one removed using command `2`. The vector `tocheck` marks documents that were printed.

## Approach

Use `mem` to store the document numbers added to memory. For command `1`, push the current document number into `mem`. For command `2`, if `mem` is empty, mark the current document as printed. Otherwise, remove the top document from `mem` and mark that document as printed. For command `3`, mark the current document as printed directly.

After processing all commands, check `tocheck` from document `1` to `n`. Store every document that was not marked as printed in `final`, then print their count and indices.

## Complexity

Time: O(N) per test case.

Space: O(N) per test case.
