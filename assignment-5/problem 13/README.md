C Level 5 – Problem (Reverse a Number)
Problem Statement

Write a program to reverse a given integer number entered by the user.

Explanation

To reverse a number:

Extract the last digit using % 10

Append it to the reversed number

Remove the last digit from the original number using / 10

Repeat until the number becomes 0

Example

Input:
1234

Output:
4321

Approach
1.Initialize a variable reversed to 0.
2.Read the input number a.
3.Use a loop while a is not 0.
4.In each iteration:
5.Get the last digit using a % 10
6.Update reversed = reversed * 10 + digit
7.Remove the last digit using a = a / 10
8.Print the reversed number.