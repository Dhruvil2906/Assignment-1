#include<stdio.h>

int main(){
    int i,num;
    int largest,smallest;

    printf("Enter 100 numbers:\n");
    scanf("%d",&num);

    largest = smallest =num;
    for(int i =2;i<=100;i++){
        scanf("%d",&num);

        if(num>largest)
        largest=num;

        if(num<smallest){
            smallest = num;
        }

        printf("largest= %d\n",largest);
        printf("smallest =%d\n");
    }

}