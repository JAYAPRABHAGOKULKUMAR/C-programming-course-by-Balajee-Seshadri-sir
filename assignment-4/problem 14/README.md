# C Level 4 – Problem 14

## Problem Statement
Write a program to get a number from the user and interchange the first and last digits and print the result.

## Example
Input: 123456 → Output: 623451  
Input: 76895439 → Output: 96895437  
Input: 675 → Output: 576  

## Approach
1. Extract the last digit.
2. Find the first digit by dividing until number < 10.
3. Calculate the number of digits.
4. Replace first digit with last and last with first.
5. Print the final number.

## Concepts Used
- Digit extraction
- Positional value calculation
- goto-based looping
