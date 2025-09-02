#include <stdio.h>

int main(){

    int n,sum=0;
    printf("enter n numbers to print");
    scanf("%d",&n);

    for(int i = 1;i<=n;i++){
        
        sum=sum+((2*i));
    }
    printf("The sum of first odd numbers is : %d",sum);
}