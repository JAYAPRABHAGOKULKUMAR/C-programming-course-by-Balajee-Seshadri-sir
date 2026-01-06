#include<stdio.h>

void disp_sum(void){
    int i=1, sum =0;
    while(i<=5){
        sum+=i;
        printf("%d\n",i);
        i++;
    }
}
int main(){
    disp_sum();
    return 0;
}