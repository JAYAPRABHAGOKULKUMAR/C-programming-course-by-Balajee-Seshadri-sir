# C Level 2 – Problem 9

## Problem Statement
Get a two-digit number from the user and check if the digit 0 is less than the digit 1.
If yes, print `1`; otherwise, print `0`.

## Example

| Input | Output |
|------:|-------:|
| 54    | 1 |
| 45    | 0 |

## Approach
1. Read a two-digit integer.
2. Extract the one's digit using modulus (`% 10`).
3. Extract the ten's digit using integer division (`/ 10`).
4. Compare the digits using the `<` operator.
5. Print the result.

## Concepts Used
- Integer division
- Modulus operator
- Relational operators
