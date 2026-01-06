/*Write the loop program to print the sum of two-digit numbers whose one's digit is 5 using the function name: disp_2digit_ones5*/

/*Write the loop program to print the sum of two-digit numbers whose one's digit is 5 using the function name: disp_2digit_ones5*/

#include<stdio.h>
int disp_2digit_ones5(int);
int main(){
    int x = 95, y;
    y = disp_2digit_ones5(x);
    printf("%d", y); 
}

int disp_2digit_ones5(int x){
    int y = 0;
    for(int i = 10; i<= x; i++){
        if(i % 10 == 5){
            y = y + i;
    }
}
    return y;

}