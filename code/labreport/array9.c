#include <stdio.h>
int main ()
{
    int n;
    printf("order:");
    scanf("%d", &n);
    int a[n][n],b[n][n],s[n][n],d[n][n];
    printf("elements of first array\n");
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("element %d x %d", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
        
    }
     printf("elements of second array\n");
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("element %d x %d", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
        
    }
        for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
          s[i][j] = a[i][j] + b[i][j];
          d[i][j] = a[i][j] - b[i][j];

        }
        
    }
    printf("sum:\n");
       for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d \t", s[i][j]);
            // scanf("%d", b[i][j]);
        }
        printf("\n");  
        
    }
      printf("difference:\n");
       for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d \t", d[i][j]);
            // scanf("%d", b[i][j]);
        }
        printf("\n");

        
    }
    
}