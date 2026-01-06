/* Total two digit odd numbers in the number*/

#include <stdio.h>
int disp_total_2digit_odd(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = disp_total_2digit_odd(x);
    printf("%d",y);
}
int disp_total_2digit_odd(int a)
{
    int d1,d2,num,y=0;
    while(a>=10)
    {
        d1 = a % 10;
        d2 = (a/10) % 10;
        num = d2*10 + d1;
        if(num % 2 != 0)
            y++;
        a = a / 10;
    }
    return y;
}
