#include<stdio.h>
void disp_2digit_odd_sum_tens7(void){
    int i=71,sum=0;
    
    while(i<=79){
        sum=sum+i;
        i=i+2;
    }
    
    printf("%d\n",sum);
}

int main(){
    disp_2digit_odd_sum_tens7();
    return 0;
}