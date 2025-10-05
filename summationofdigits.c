#include <stdio.h>

int main() {
    int num,sum = 0,  digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits of %d are: ", num);
    

    while(num > 0) {
        digit = num % 10;
        sum=sum+digit;
        num /= 10;
        
    }

    printf("total sum of digit is %d",sum);
    return 0;
}