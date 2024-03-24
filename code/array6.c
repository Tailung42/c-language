#include <stdio.h>
void main()
{
    int a[100], b[100], c[100], i, j = 0, k = 0, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); 
    }
    // separate odd and even elements of the array
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[j] = a[i];
            j++;
        }
        else
        {
            c[k] = a[i];
            k++;
        }
    }
    // print the odd and even arrays
    printf("The odd array is: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
    printf("The even array is: ");
    for (i = 0; i < j; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
}