/*LCM of two numbers
*/
#include <stdio.h>
int disp_LCM2(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = disp_LCM2(x);
    printf("%d",y);
}
int disp_LCM2(int a)
{
    int b,i;
    scanf("%d",&b);

    for(i = (a>b?a:b); ; i++)
    {
        if(i%a==0 && i%b==0)
            return i;
    }
}
