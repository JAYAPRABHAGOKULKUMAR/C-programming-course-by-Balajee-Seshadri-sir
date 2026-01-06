#include<stdio.h>
void middle_2digits_prime(int x){
    x  = x / 10;
    int middle_num= x % 100;
    int flag=0;
    if(middle_num<=1){
        flag=1;
    }   
    for(int i=2;i*i<=middle_num;i++){
        if(middle_num%i==0){
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
    middle_2digits_prime(x);
    return 0;
}