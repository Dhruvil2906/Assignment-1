#include<stdio.h>

int main(){
  int t;
  int a[5];
    for(int i = 0;i<5;i++){
      printf("enter values :");
        scanf("%d",&a[i]);

    }
    printf("array before sorting :");
    for( int i = 0;i<5;i++){
        printf("%d\t",a[i]);
    }

  for(int i = 0;i<4;i++){
    for(int j=i+1;j<5;j++){

    if(a[i]>a[j]){
        t =a[i];
        a[i]=a[j];
        a[j]=t;
      

    }}

  }
   for(int i = 0;i<5;i++){
  printf("%d",a[i]);
   }
   printf("\n");
}