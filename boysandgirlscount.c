#include<stdio.h>
int main(){
    char code;
    int boys=0,girls=0;
    printf("enter B for boys and G for girls");

    for(int i=1;i<=50;i++){
        printf("student %d: ",i);
        scanf("%c",&code);
        if(code=="B" ||code =="b"){
            boys++;
        }
        else if(code =="G"|| code =="g"){
            girls++;
        }
        else{
            printf("invalid input");
        }
    }
    printf("\ntotalboys = %d\n",boys);
    printf("total girsl = %d\n",girls);

}