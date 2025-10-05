#include<stdio.h>

int main(){
    int n;
    int i,num,sum = 0;
    printf("enter any n value for which sum and mean will be calculated");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&num);
        sum += num;
    }
   float mean = sum/10.0;
    printf("sum =%d\n",sum);
    printf("mean = %f\n",mean);
   
    return 0;
}