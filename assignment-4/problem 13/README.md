# C Level 4 – Problem 13

## Problem Statement
Write a program to get a number from the user and print the reverse of that number.

## Example
Input: 123456 → Output: 654321  
Input: 76895439 → Output: 93459867  
Input: 675 → Output: 576  

## Approach
1. Read the number.
2. Extract the last digit using modulus operator.
3. Build the reversed number by multiplying previous result by 10.
4. Remove the last digit using division.
5. Repeat using goto until number becomes zero.

## Concepts Used
- Digit extraction
- Integer arithmetic
- goto-based looping
