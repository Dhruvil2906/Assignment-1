#include<stdio.h>

int main(){

     int result[2][3];
    int rows = 2,column = 3;
    int array1[2][3]={{1,2,3},{4,5,6}};
    int array2[2][3]={{7,8,9},{10,11,12}};
    
    for(int i =0;i<rows;i++){
        for(int j = 0;j<column;j++){
         result[i][j]=array1[i][j]*array2[i][j];
        }
    }

    printf("the result of addition is : \n");

   for(int i=0;i<rows;i++){
    for(int j=0;j<column;j++){
      printf("%d\t",result[i][j]);
    }
    printf("\n");
   }


}