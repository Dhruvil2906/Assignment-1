#include <stdio.h>
int main(){

    int num,square;

    printf("enter a number : ");
    scanf("%d",&num);

    square = num*num;

    if(square%10==num||square%100==num||square%100==num){
        printf("%d is an automorphic number.\n",num);

    }else
    printf("%d is not an automorphic number",num);

    return 0;
}