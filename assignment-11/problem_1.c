#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int *p = &x;
    *p = *p + 1;
    printf("%d", *p);
    
}