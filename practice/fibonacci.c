#include <stdio.h>
int fib(int);
int main ()
{
	int t;
	printf("term: ");
	scanf("%d", &t);
	printf("The %d the fibonacci number is: %d", t,  fib(t));
}
	int fib(int n)
{   
	// base case
	if(n == 1)
	{return 0;}
	else if(n == 2)
	{return 1;}

	// recurssive case
	return fib(n-1) + fib(n-2); 
}