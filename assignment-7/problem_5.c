#include<stdio.h>
void disp_odd(void){
    int i = 1;
    while(i<=9){
        if(i % 2 !=0){
            printf("%d\n",i);
        }
        i++;
    }
}
int main(){
    disp_odd();
}