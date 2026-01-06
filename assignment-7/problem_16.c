#include<stdio.h>
void check_prime(int x){
    int flag=0;
    if(x<=1){
        flag=1;
    }
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Prime\n");
    }
    else{
        printf("Not Prime\n");
    }
}

int main(){
    int x;
    scanf("%d",&x);
    check_prime(x);
    return 0;
}