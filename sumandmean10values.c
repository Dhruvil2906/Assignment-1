#include<stdio.h>

int main(){
    
    int i,num,sum = 0;
    for(int i=1;i<=10;i++){
        scanf("%d",&num);
        sum += num;
    }
   float mean = sum/10.0;
    printf("sum =%d\n",sum);
    printf("mean = %f\n",mean);
   
    return 0;
}