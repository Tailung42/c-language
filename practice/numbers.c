#include <stdint.h>
#define MAX 100
void printAscending(int *, int);
void printAverage(int *, int);
void printMaximum(int *, int);
void searchKey(int *, int, int);



int main()
{
    int numbers[MAX], n = 0, choice, key;
    
    printf("Enter numbers (enter -1 to stop):\n");
    while (1) {
        int num;
        printf("Enter number: ");
        scanf("%d", &num);
        if (num == -1) break;  // Stop input when -1 is entered
        numbers[n] = num;
        n++;
    }

    while(1)
    {
        // Display the menu
        printf("\nMenu:\n");
        printf("1. Print numbers in ascending order\n");
        printf("2. Find the average\n");
        printf("3. Search for a key number\n");
        printf("4. Find the maximum number\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printAscending(numbers, n);
                break;
            case 2:
                printAverage(numbers, n);
                break;
            case 3:
                printf("Enter number to search for: ");
                scanf("%d", &key);
                searchKey(numbers, n, key);

                break;
            case 4:
                printMaximum(numbers, n);
                break;
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

void printAscending(int arr[], int n)
{
    int temp;
    // first sort the array
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n -1; j++) {
            if (arr[j] > arr[j + 1])
            {
                // swap
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("---------------Numbers in ascending order -------------- \n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void printAverage(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Average:  %.2f \n", (float)sum / n);
}

void printMaximum(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maximum number: %d \n", max);
}

void searchKey(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Number %d found at index %d.\n", key, i);
            return;
        }
    }
    printf("Number %d not found.\n", key);
    return; 

    }