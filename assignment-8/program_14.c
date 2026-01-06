/*Two digit perfect squares*/

#include <stdio.h>
int disp_two_digit_square(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = disp_two_digit_square(x);
    printf("%d",y);
}
int disp_two_digit_square(int a)
{
    int d1,d2,num,y=0;
    while(a>=10)
    {
        d1 = a % 10;
        d2 = (a/10) % 10;
        num = d2*10 + d1;
        if(num==16||num==25||num==36||num==49||num==64||num==81)
            y++;
        a = a / 10;
    }
    return y;
}
