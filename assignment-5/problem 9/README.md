# C Level 5 – Problem 9

## Problem Statement
Write a loop program to print the **sum of two-digit numbers whose one's digit is 5**.

## Explanation
The two-digit numbers whose one's digit is `5` are:

15, 25, 35, 45, 55, 65, 75, 85, 95

The sum of these numbers is:
15 + 25 + 35 + 45 + 55 + 65 + 75 + 85 + 95 = 495

## Approach
1. Initialize a variable `sum` to 0.
2. Use a loop starting from `15` up to `95`.
3. Increment the loop variable by `10` to always keep the one's digit as `5`.
4. Add each value to `sum`.
5. Print the final sum.
