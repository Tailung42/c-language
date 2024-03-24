#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main()
{
    char arr[] = "BipinThapa";
    int size = strlen(arr);
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++ )
        {
            if(arr[j]> arr[j + 1])
            {
                // sort;
                char dummy = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = dummy;
            }
        }
    }
    printf("%s\n", arr);
}
