#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(int argc, char *argv[])
{
    node *list = NULL;
    for (int i = 1; i < argc; i++)
    {
        node *n = malloc(sizeof(node));
        n->number = atoi(argv[i]);
        n->next = NULL;

        if (list == NULL)
        {
            list = n;
        }

        else if (list->number > n->number)
        {
            n->next = list;
            list = n;
        }
        else
        {
            for (node *ptr = list; ptr  != NULL; ptr  = ptr->next)
            {
                if(ptr->next == NULL)
                {
                    ptr->next = n;
                    break;
                }
                else if(n->number < ptr->next->number)
                {
                    n->next = ptr->next;
                    ptr->next = n;
                    break;
                }
            }
        }
    }

    node *ptr = list;
    while(ptr != NULL)
    {
        printf("%d\n", ptr->number);
        ptr = ptr->next;
    }
}