#include<stdio.h>
void disp_sum_all_digits(void){
    int n, sum = 0;

    scanf("%d", &n);

    while (n != 0) {
        sum = sum + (n % 10);
        n = n / 10;
    }

    printf("%d\n", sum);
}

int main(){
    disp_sum_all_digits();
    return 0;
}