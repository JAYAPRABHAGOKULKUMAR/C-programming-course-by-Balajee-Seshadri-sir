#include<stdio.h>
int main(){
    int a, reveresed = 0;
    scanf("%d", &a);
    while(a != 0){
        reveresed = reveresed * 10 + (a % 10);
        a=a/10;
    }
    printf("%d\n", reveresed);
    return 0;
}