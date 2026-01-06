/* Biggest 4 digit number divisble by 7 and 9*/

#include <stdio.h>
int disp_biggest_4digit_div7_9(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = disp_biggest_4digit_div7_9(x);
    printf("%d",y);
}
int disp_biggest_4digit_div7_9(int a)
{
    int i;
    for(i=9999;i>=1000;i--)
        if(i%7==0 && i%9==0)
            return i;
}
