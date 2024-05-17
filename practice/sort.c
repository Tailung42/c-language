#include<stdio.h>
int* sort(int arr[], int s);

int main(void)
{
    const int size ;
    printf("Enter the size of numbers' list: ");
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        printf("number %d: ", i + 1);
        scanf("%d", (arr + i)); // note arr[2] == *(arr + 2) therefore &arr[i] == (arr +i)
    }
    // since array is passed by reference the changes apply to original array.
    sort(arr, size);

// prints the numbers after arranges
    for(int i = 0; i < size; i++)
    {
       printf("%d \n", arr[i]);
    }
}

 int* sort(int arr[], int s)
{
    for(int i = 0; i < s - 1; i++)   
    {
        for(int j = i+1; j <s; j++ )
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}