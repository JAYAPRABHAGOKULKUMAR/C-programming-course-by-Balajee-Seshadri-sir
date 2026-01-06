#include<stdio.h>
void disp_interchange_first_last_digit(int n){
    int first, last, temp, pow = 1;

    last = n % 10;
    temp = n;

    while (temp >= 10) {
        temp = temp / 10;
        pow = pow * 10;
    }

    first = temp;
    n = n - (first * pow) - last;
    n = n + (last * pow) + first;

    printf("%d\n", n);
}

int main(){
    int n;
    scanf("%d", &n);
    disp_interchange_first_last_digit(n);
    return 0;
}