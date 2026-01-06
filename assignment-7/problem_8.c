#include<stdio.h>
void disp_2digit_even_sum6(void){
    int i = 11, sum = 0;
    while(i <=99){
        if(i%2==0){
            if(i%10 + i/10 == 6){
                printf("%d\n", i);
            }
        }
        i++;
    }
}

int main(){
    disp_2digit_even_sum6();
    return 0;
}