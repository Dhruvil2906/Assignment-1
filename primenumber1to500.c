#include<stdio.h>
int main(){
    int num,i,j,isprime;
    printf("prime numbers between 1 to 500 are \n");
    
    for(num=2;num<=500;num++){
        isprime =1;

        for(int i=2;i<=num/2;i++){

            if(num%i==0){
                isprime =0;
                break;
            }

        }

        if(isprime)
        printf("%d",num);
    }

    printf("\n");
    return 0;


}