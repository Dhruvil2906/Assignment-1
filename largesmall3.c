#include<stdio.h>
int main(){
   int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    
   int  largest =a;
   int smallest = a;
   
   if(b>largest){
    largest = b;
   }

   if(c>largest){
    largest =c;
   }

   if(b<smallest){
    smallest = b;}

    if(c<smallest){
        smallest = c;
    }

printf("largest = %d\n",largest);
printf("smallest = %d\n",smallest);
}