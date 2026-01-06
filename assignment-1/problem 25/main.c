#include <stdio.h>

int main(void) {
    int num, sum;
    scanf("%d", &num);

    sum = num/100 + (num/10)%10 + num%10;

    sum = sum/10 + sum%10;
    sum = sum/10 + sum%10;

    printf("%d\n", sum);
    return 0;
}
