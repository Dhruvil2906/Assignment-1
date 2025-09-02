#include <stdio.h>

int main(){

    int n,mul=1;
    printf("enter n numbers to print");
    scanf("%d",&n);

    for(int i = 1;i<=n;i++){
        
        mul = mul*i;
        
    }

    printf("%d",mul);
}
