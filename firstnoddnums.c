#include <stdio.h>

int main(){

    int n;
    printf("enter n numbers to print");
    scanf("%d",&n);

    for(int i = 1;i<=n;i++){
        printf("%d\n",(i*2)-1);
        
    }
}