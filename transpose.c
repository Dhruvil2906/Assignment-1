#include<stdio.h>

int main(){
  
    int rows =4,column =4;
   int array[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
   int transpose[4][4];

   for(int i = 0;i<rows;i++){
    for(int j =0;j<column;j++){
        transpose[j][i]=array[i][j];
    }
   }

   for(int i = 0;i<rows;i++){
    for(int j =0;j<column;j++){
        printf("%d\t",transpose[i][j]);
    }
    printf("\n");
   }
}