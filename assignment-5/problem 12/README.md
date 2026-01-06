# C Level 5 – Problem 12

## Problem Statement
Write a program to get a number from the user and print the **sum of all its digits**.

## Explanation
Each digit of the given number is extracted and added together to find the total sum.

### Examples:
- Input: `123456` → Output: `21`  
  (1 + 2 + 3 + 4 + 5 + 6)
- Input: `76895439` → Output: `51`
- Input: `675` → Output: `18`

## Approach
1. Read an integer input from the user.
2. Initialize a variable `sum` to store the total.
3. Use a loop to extract the last digit using the modulus operator (`% 10`).
4. Add the extracted digit to `sum`.
5. Remove the last digit by dividing the number by `10`.
6. Repeat until the number becomes `0`.
7. Print the final sum.

