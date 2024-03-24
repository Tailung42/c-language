#include <stdio.h>
void main()
{
    // printf("%d \n", sizeof(int));
    // printf("%d \n", sizeof(long));
    // printf("%d \n", sizeof(long long));
    int num[2] = {2 , 3};
    int* a = num;
    scanf("%d", &num[0]);
    printf("%d\n", num[0]);
    printf("%p\n",a);
    printf("%i\n",num[1]);
    printf(" arr[i] = *(arr + i) \n");
    printf("%i\n",a[0]); // we can use pointer as an array
    printf("%i\n",a[1]); // we can use pointer as an array
    printf("%i\n",a[2]); // we can use pointer as an array

    char* names[4] = {"Bipin", "nabin", "kalpana", "Binod"};
    for (int i = 0; i < 4; i++)
    {
        printf("%s \n", names[i]);
    }
    

}