/*#C LEVEL 7 - PROBLEM 1
Write a loop program to print 5 to 1 on one by one with a function name: disp_descend
*/
#include<stdio.h>
void disp_descend(void){
    int i=5;
    while(i!=0){
        printf("%d\n",i);
        i--;
    }
}
int main(){
    disp_descend();
    
return 0;
}