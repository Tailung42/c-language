#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, size = 0;
    double  sum = 0;
    printf("number: ");
    scanf("%d", &num);
    temp = num;

    // Calculate the number of digits in num
    while (temp > 0) {
        temp /= 10;
        size++;
    }

    temp = num;  

    // Calculate the sum of the digits raised to the power of size
    while (temp > 0) {
        sum += pow(temp % 10, size);
        temp /= 10;
    }

    // Check if the sum is equal to the original number
    if((int)sum == num) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}