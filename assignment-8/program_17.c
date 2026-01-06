/*Count numbers < 100000 whose digit sum = 14
*/

#include <stdio.h>
int disp_count_sum14(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = disp_count_sum14(x);
    printf("%d",y);
}
int disp_count_sum14(int a)
{
    int i,n,sum,y=0;
    for(i=1;i<100000;i++)
    {
        n=i;
        sum=0;
        while(n>0)
        {
            sum += n%10;
            n = n/10;
        }
        if(sum==14)
            y++;
    }
    return y;
}
