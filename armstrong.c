#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0, n = 0, i, power;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    
    while(temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;

    // Calculate sum of digits raised to power n
    while(temp != 0) {
        digit = temp % 10;
        power = 1;
        
        for(i = 1; i <= n; i++)
            power *= digit;

        sum += power;
        temp /= 10;
    }

    
    if(sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
