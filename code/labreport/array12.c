#include <stdio.h>
// declare the function prototype
void read_and_display(int arr[], int n);

int main()
{
    // declare the array of size 10
    int numbers[10];
    // call the function and pass the array and its size
    read_and_display(numbers, 10);
    return 0;
}

// define the function that reads and displays the array elements
void read_and_display(int arr[], int n)
{
    int i;
    // read the elements of the array from the user
    printf("Enter 10 numbers: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // display the elements of the array
    printf("The numbers are: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}