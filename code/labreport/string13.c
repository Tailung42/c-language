#include <stdio.h>
#include <string.h>

int main (void)
{
    char person[5][20];
    printf("enter name of 5 people:");
    for (int i = 0; i < 5; i++)
    {
        printf("person %d: ", i + 1);
        scanf("%s", person[i]);
    }
    // sort the names of people
    for (int j = 0 ; j < 4; j++)
    for (int i = 0; i < 4; i++)
    {
        if (strcmp(person[i], person[i + 1]) > 0)
        {
          char temp[20];
          strcpy(temp, person[i]);
          strcpy(person[i], person[i + 1]);
          strcpy(person[i + 1], temp);  
        }
    }
    
        for (int i = 0; i < 5; i++)
    {
        printf("person %d: is %s \n", i + 1, person[i]);

    }
}