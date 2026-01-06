/*Write a loop program to print sum of 1 to 5 using the function name: disp_sum*/


#include<stdio.h>
int disp_sum(int);

int main(){
    int x = 5, y;
    y = disp_sum(x);
    printf("%d",y);
}

int disp_sum(int x){
    int y = 0;
    for(int i=1;i<=x;i++){
        y = y + i;
    }
    return y;
}