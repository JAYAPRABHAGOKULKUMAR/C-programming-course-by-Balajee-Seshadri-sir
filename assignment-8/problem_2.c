/*Write a loop program to print sum of 6 to 1, using the function name: disp_rsum*/

#include<stdio.h>
int disp_rsum(int);
int main(){
    int x = 6, y;
    y = disp_rsum(x);
    printf("%d", y);
}

int disp_rsum(int x){
    int y = 0;
    for(int i = x; i>=1; i--){
        y = y + i;
    }
    return y;
}