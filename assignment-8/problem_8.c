/*Interchanging the firs and the last digit*/

#include <stdio.h>
int disp_interchange_first_last_digit(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = disp_interchange_first_last_digit(x);
    printf("%d",y);
}
int disp_interchange_first_last_digit(int a)
{
    int last, first, temp, pow=1, y;
    last = a % 10;
    temp = a;
    while(temp >= 10)
    {
        temp = temp / 10;
        pow = pow * 10;
    }
    first = temp;
    y = last * pow + (a % pow);
    y = y - last + first;
    return y;
}
