#include <stdio.h>
int main(){
    int arr[100],n,choice=0,pos,value;
    printf("enter number of elements:");
    scanf("%d,&n");

    printf("enter %d elements :",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }

    while(choice!=8){
        printf("\nmenu:\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end.\n");
        printf("3. Insert at any position\n");
        printf("4. Delete from begining. \n");
        printf("5. Delet from end.\n");
        printf("6. Delete from any position.\n");
        printf("7. Exit.\n");

        printf("enter your choice.\n");
        scanf("%d",&choice);

        switch(choice){

            case 1:
            printf("enter value :");
            scanf("%d",&value);
            for(int i=n;i>0;i++){
           arr[i]=arr[i-1];
            }
        }
    }
}