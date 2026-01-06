# C Level 2 – Problem 14

## Problem Statement
Get a four-digit number from the user and check if the first two digits are equal to the last two digits.
If yes, print `1`; otherwise, print `0`.

## Example

| Input | Output |
|------:|-------:|
| 1919  | 1 |
| 6567  | 0 |

## Approach
1. Read the number.
2. Extract the first two digits using `/ 100`.
3. Extract the last two digits using `% 100`.
4. Compare both values.
5. Print the result.

## Concepts Used
- Integer division
- Modulus operator
- Relational operators
