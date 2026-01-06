/*Single digit prime numbers*/
#include <stdio.h>
int disp_single_digit_prime(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = disp_single_digit_prime(x);
    printf("%d",y);
}
int disp_single_digit_prime(int a)
{
    int d,y=0;
    while(a>0)
    {
        d = a % 10;
        if(d==2||d==3||d==5||d==7)
            y++;
        a = a / 10;
    }
    return y;
}

