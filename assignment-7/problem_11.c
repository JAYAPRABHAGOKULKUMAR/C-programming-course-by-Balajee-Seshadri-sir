#include<stdio.h>
void count_total_digits(void){
    int n, count = 0;

    scanf("%d", &n);

    while (n != 0) {
        count++;
        n = n / 10;
    }

    printf("%d\n", count);
}

int main(){
    count_total_digits();
    return 0;
}