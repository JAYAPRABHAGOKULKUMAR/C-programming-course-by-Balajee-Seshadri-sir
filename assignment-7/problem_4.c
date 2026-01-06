#include<stdio.h>
void disp_rsum(void){
    int i=6, sum = 0;
    while(i>=1){
        sum = sum + i;
        i--;
    }
    printf("%d\n",sum);
}

int main(){
    disp_rsum();
    return 0;
}