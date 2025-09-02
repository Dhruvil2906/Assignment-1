#include <stdio.h>

int main(){

    int n,sum=0;
    printf("enter n numbers to print");
    scanf("%d",&n);

    for(int i = 1;i<=n;i++){
        
        sum=sum+i;
    }
    printf("The sum of this program is : %d\n",sum);
}