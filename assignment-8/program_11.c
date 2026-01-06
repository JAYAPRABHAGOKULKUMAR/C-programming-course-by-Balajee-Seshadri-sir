/*Total odd digits*/

#include <stdio.h>
int disp_total_odd_digits(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = disp_total_odd_digits(x);
    printf("%d",y);
}
int disp_total_odd_digits(int a)
{
    int d,y=0;
    while(a>0)
    {
        d = a % 10;
        if(d % 2 != 0)
            y++;
        a = a / 10;
    }
    return y;
}
