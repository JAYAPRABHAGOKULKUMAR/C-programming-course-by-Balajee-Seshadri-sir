#include<stdio.h>
void disp_2digit_odd_below20(void){
    int i = 11;
    while(i<=20){
        if(i%2!=0){
            printf("%d\n",i);
        }
        i++;
    }
}
int main(){
    disp_2digit_odd_below20();
    return 0;
}