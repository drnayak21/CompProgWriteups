# Approach

We use two frequency arrays of size 26 to store the character frequencies of the numerator (`p`) and denominator (`q`).

We iterate through all 26 characters and cancel their common occurrences by subtracting the minimum frequency from both arrays.

After cancellation, we count the remaining characters in both strings.

The answer is **YES** if:
- No characters remain in the denominator.
- Exactly 3 characters remain in the numerator.
- These characters are exactly one 's', one 'i', and one 'x'.

Otherwise, the answer is **NO**.

## Time Complexity: O(n + m)

Building the frequency arrays takes O(n + m). The cancellation and verification loops take O(26), which is constant.

## Space Complexity: O(1)

We use two fixed-size frequency arrays of 26 integers, independent of the input size.
