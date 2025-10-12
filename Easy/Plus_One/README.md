# Problem: Increment a Large Integer Represented as a Vector

## Problem Statement

You are given a large integer represented as an integer array `digits`, where each `digits[i]` is the `i`-th digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading zeros.

Your task is to increment the large integer by one and return the resulting array of digits.

---

## Input

- An integer array `digits` of length `n` (1 ≤ n ≤ 10⁴)
- Each `digits[i]` is in the range 0 ≤ digits[i] ≤ 9
- The integer represented by `digits` has no leading zeros

---

## Output

- An integer array representing the incremented number

---

## Examples

**Example 1:**

Input: digits = [1, 2, 3]
Output: [1, 2, 4]
Explanation: 123 + 1 = 124
