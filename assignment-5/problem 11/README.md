C Level 4 – Problem 11
Problem Statement

Write a program to get a number from the user and print the total number of digits in that number.

Explanation

To find the number of digits in a given number:

We repeatedly divide the number by 10.

Each division removes the last digit.

We count how many times this operation is performed until the number becomes 0.

Examples:

Input: 123456 → Output: 6

Input: 76895439 → Output: 8

Input: 675 → Output: 3

Approach

1.Read an integer from the user.
2.Initialize a variable count to 0.
3.Use a loop that runs while the number is not equal to 0.
4.Inside the loop:
5.Divide the number by 10.
6.Increment the count.
7.After the loop ends, print the value of count.