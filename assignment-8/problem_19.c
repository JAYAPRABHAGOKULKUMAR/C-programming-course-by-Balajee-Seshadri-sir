/*LCM of three numbers
*/
#include <stdio.h>
int disp_LCM3(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = disp_LCM3(x);
    printf("%d",y);
}
int disp_LCM3(int a)
{
    int b,c,i,max;
    scanf("%d %d",&b,&c);

    max = a;
    if(b > max) max = b;
    if(c > max) max = c;

    for(i = max; ; i++)
    {
        if(i%a==0 && i%b==0 && i%c==0)
            return i;
    }
}
