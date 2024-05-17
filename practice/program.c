#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int number;
	struct node *next;
}node;

int main(int argc, char *argv[])
{
	if ( argc == 1)
	{
		printf("usage fault!\n");
		return 1;
	}

	node *list = NULL;
	// appending
//    for (int i = 1; i < argc; i++)
//     {
//          node *n = malloc(sizeof(node));
//          n->number = atoi(argv[i]);
//          n->next = list;
//          list = n;
//     } 

	for (int i = 1; i < argc; i++)
	{
		node *n = malloc(sizeof(node));
		n->number = atoi(argv[i]);
		n->next = 0x00;

		if (list == NULL)
		{
			list = n;
		}
		else
			{
			for (node *ptr = list; ptr != NULL; ptr = ptr->next)
			{
				if (ptr->next == NULL)
				{
					ptr->next = n;
					// n->next = 0x00;
					break;		
				}
			}
		}

	}

	for (node * ptr = list; ptr != NULL; ptr = ptr->next)
	{
		printf("%d \t", ptr->number);
	}
}