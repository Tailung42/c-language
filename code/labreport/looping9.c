#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("The sum is %d\n", sum);
}