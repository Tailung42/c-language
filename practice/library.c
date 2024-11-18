#include <stdio.h>
#define MAX 200

typedef struct {
    int id;
    char title[50];
    int edition;
    char author[20];
    float price;
} Book;

void inputBook();
void searchBook();
void viewRecord();
void append(Book);
int noOfBooks();
void displayBook(int id);



Book books[MAX];
int main(void)
{
    int choice;
    do
    {
        printf("\n1 -> Input new book record\n");
        printf("2 -> View book record\n");
        printf("3 -> Search book using book-number\n");
        printf("4 -> Exit \n\n");
        printf("Your choice: ");
        

        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                inputBook();
                break;
            case 2:
                viewRecord();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                printf("Exiting the program");
                break;
            default:
                printf("Error: Invalid Input!! Please choose among the availabe options.");
        }
    } while(choice != 4);
    return 0;
    
}

void inputBook(void)
{
    Book newBook;

    getchar(); // reads and newline character
    printf("Enter book's title: ");
    scanf("%[^\n]",newBook.title);
    
    printf("Enter Editon: ");
    scanf("%d", &newBook.edition);
    getchar(); // just reads new line character 

    printf("Enter author: ");
    scanf("%[^\n]", newBook.author);

    printf("enter price: ");
    scanf("%f", &newBook.price);

    // add new book to the list 
    append(newBook);

    printf("\n -----------------successfully added------------------\n");
}

void viewRecord()
{
    int limit = noOfBooks();

    printf("\n----------------LIST OF ALL BOOKS--------------------\n");
    for (int i = 0; i < limit; i++)
    {
        displayBook(i);
    }
    printf("Total books: %d \n", limit);
}
 
void searchBook()
{
    int bookId;
    printf("Enter the id of the book: ");
    scanf("%d", &bookId);

    if(bookId > noOfBooks())
    {
        printf("Error: Invalid book id\n");
        return;
    }
    displayBook(bookId - 1);

}


void append(Book newBook)
{
    int index = noOfBooks(); // indexing starts from 0 but no. of books starts from 1
    newBook.id = index + 1;
    books[index] = newBook;
}

int noOfBooks()
{

    for(int index = 0; index < MAX; index++)
    {
        if (!books[index].id)
        {
            return index;
        }
    }
    return MAX;
}

void displayBook(int index)
{
    printf("\nid: %d\n", books[index].id);      
    printf("title: %s\n", books[index].title);
    printf("editon: %d\n", books[index].edition);
    printf("author: %s\n", books[index].author);
    printf("price: %.2f\n", books[index].price);
    printf("--------------------------------------------------------\n");
}