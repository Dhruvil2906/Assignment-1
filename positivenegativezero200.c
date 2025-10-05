#include<stdio.h>
int main(){
int i, num;

int positive=0,negative=0,zero=0;

for(i=1;i<=200;i++){
    scanf("%d",&num);

    if(num>0){
        positive++;
    }
   else if(num<0){
        negative++;
    }
    else{
        zero++;
    }
}
printf("positive number %d",positive);
printf("negative number %d",negative);
printf("zeroes =%d\n",zero);

}