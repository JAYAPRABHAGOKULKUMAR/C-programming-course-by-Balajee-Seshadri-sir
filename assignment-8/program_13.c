/* Single digit perfect squares*/

#include <stdio.h>
int disp_single_digit_square(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = disp_single_digit_square(x);
    printf("%d",y);
}
int disp_single_digit_square(int a)
{
    int d,y=0;
    while(a>0)
    {
        d = a % 10;
        if(d==1 || d==4 || d==9)
            y++;
        a = a / 10;
    }
    return y;
}
