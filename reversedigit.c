#include <stdio.h>

int main() {
    int num, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits of %d are: ", num);
    
    temp = num;
    
    int rev = 0;
    while(temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    printf("the number entered %d\n",temp);
    printf("number reversed %d\n",rev);


    return 0;
}
