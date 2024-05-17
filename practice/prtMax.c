#include <stdio.h>
int max(int* , int*);

void main()
{
	int* a , * b, x , y;
	a = &x, b = &y;
	printf("Enter two numbers: ");
	scanf("%d %d", a , b);
	int result = max(a , b);
	printf("%d", result);
}
int max(int* a , int* b)
{
	if(*a > *b)
		return *a;
	else if(*a < *b)
		return *b;    
}