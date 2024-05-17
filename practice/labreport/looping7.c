#include <stdio.h>
void main()
{
    int n; 
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
         
                printf("%d is not prime!", n);
                return;
        }
    }
    printf("it if prime!");
}