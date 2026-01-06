#include<stdio.h>
void disp_2digit_odd_sum7(void){
    int i = 11, sum = 0;
    while(i<=99){
        if(i % 2 !=0){
            if(i % 10 + i / 10 == 7){
               printf("%d\n", i); 
            }
        }
        i++;
    }
}

int main(){
    disp_2digit_odd_sum7();
    return 0;
}