/*Sum digits of each number, store in new array, sort ascending*/
#include <stdio.h>

int digitSum(int n)
{
    int s = 0;
    while(n > 0)
    {
        s += n % 10;
        n = n / 10;
    }
    return s;
}

int main()
{
    int a[50], b[50], n, i, j, count = 0, temp;

    while(1)
    {
        scanf("%d", &n);
        if(n == 0)
            break;
        a[count++] = n;
    }

    for(i = 0; i < count; i++)
        b[i] = digitSum(a[i]);

    for(i = 0; i < count; i++)
        for(j = i + 1; j < count; j++)
            if(b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }

    for(i = 0; i < count; i++)
        printf("%d ", b[i]);

    return 0;
}
