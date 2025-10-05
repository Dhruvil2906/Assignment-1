#include <stdio.h>

int main() {
    int num,count = 0,  digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits of %d are: ", num);
    

    while(num > 0) {
        digit = num % 10;
        num /= 10;
        count++;
    }

    printf("total number in digit are %d",count);
    return 0;
}
