/*HCF (GCD) of two numbers
*/
#include <stdio.h>
int disp_count_HCF2(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = disp_count_HCF2(x);
    printf("%d",y);
}
int disp_count_HCF2(int a)
{
    int b,i,hcf=1;
    scanf("%d",&b);

    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
            hcf = i;
    }
    return hcf;
}
