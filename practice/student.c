#include <stdio.h>
#include <string.h>

void addRecord();
void displayAllRecords();
void displayAboveEighteen();
void deleteRecord();

int main(void)
{
    int choice;
    while(1)
    {
        printf("\n1 -> Write a new record\n");
        printf("2 -> Display all records\n");
        printf("3 -> Display students older than 18\n");
        printf("4 -> Delete a Student's Record\n");
        printf("5 -> Exit\n");
        printf("\nYour choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addRecord();
            break;
        case 2:
            displayAllRecords();
            break;
        case 3:
            displayAboveEighteen();
            break;
        case 4:
            deleteRecord();
            break;
        case 5:
            printf("Exiting program\n");
            return 0;
        default:
            printf("Invalid input");
            break;
        }

    }
}

void addRecord()
{
    FILE * fptr = fopen("database.dat", "a");
    if (fptr == NULL)
    {
        fptr = fopen("database.dat", "w");
    }

    int roll, class, age, choice = 1;
    char name[20];
    while(choice ==1)
    {
        getchar();
        printf("Enter name: ");
        scanf("%[^\n]", name);
        printf("class: ");
        scanf("%d", &class);
        printf("Rollno: ");
        scanf("%d", &roll);
        printf("Age: ");
        scanf("%d", &age);

        fprintf(fptr,"%s\t%d\t%d\t%d\n", name, class, roll, age);
        printf("-----------successfully written-----------\n");
        printf("to add more press: 1\nto stop press 0\n");
        scanf("%d", &choice);
    }
    fclose(fptr);

}

void displayAllRecords()
{
    int roll, class, age;
    char name[20];

    FILE * fptr = fopen("database.dat", "r");

    while (fscanf(fptr, "%[^\t]\t%d\t%d\t%d\n", name, &class, &roll, &age) != EOF)
    {
        printf("\nname: %s\n", name);
        printf("class: %d\n", class);
        printf("RollNo: %d\n", roll);
        printf("Age: %d\n", age);
        printf("-------------------------------\n");

    }
}

void displayAboveEighteen()
{
    int roll, class, age, found = 0;
    char name[20];

    FILE * fptr = fopen("database.dat", "r");

    while (fscanf(fptr, "%[^\t]\t%d\t%d\t%d\n", name, &class, &roll, &age) != EOF)
    {
        if(age > 18)
        {
            found = 1;
            printf("\nname: %s\n", name);
            printf("class: %d\n", class);
            printf("RollNo: %d\n", roll);
            printf("Age: %d\n", age);
            printf("-------------------------------\n");
        }
    }
    if (!found)
    {
        printf("No student above the age of 18!\n");
    }
    
}

void deleteRecord()
{
    FILE *fptr = fopen("database.dat", "r");

    FILE *tempFile = fopen("temp.dat", "w");

    int roll, class, age, targetRoll, targetClass;
    char name[20];

    printf("Enter the class of the student to delete: ");
    scanf("%d", &targetClass);
    printf("Enter the roll number of the student to delete: ");
    scanf("%d", &targetRoll);

    while (fscanf(fptr, "%[^\t]\t%d\t%d\t%d\n", name, &class, &roll, &age) != EOF)
    {
        if (class == targetClass && roll == targetRoll)
        {
            printf("successfully deleted: %s, %d, %d, %d\n", name, class, roll, age);

        }
        else {
            fprintf(tempFile, "%s\t%d\t%d\t%d\n", name, class, roll, age);
        }
    }


    fclose(fptr);
    fclose(tempFile);
    remove("database.dat");
    rename("temp.dat", "database.dat");
}
