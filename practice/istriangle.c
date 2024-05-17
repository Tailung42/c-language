#include <stdio.h>
int max(int a , int b , int c);
int istriangle( int a, int b, int c);

int main(void)
{
	// prompt user to enter 3 numbers
	// find bigger num
	//  if sum - bigger > bigger number then print true; 
	printf("Enter the length of sides ");
	int a , b , c;
	scanf("%d %d %d", &a, &b, &c);

	if(istriangle(a, b, c))
	{
		printf("They are sides of triangle");
	}
	else
	printf("they are not sides of triangle");

}

int max(int a , int b , int c)
{
	if(a > b)
	{
		if(a > c )
			return a;
		else
			return c;
	}
	else
	{
		if(b > c)
			return b;
		else   
			return c;
	}
}
int istriangle( int a, int b, int c)
{
	int sum = a + b + c;
	int big = max(a, b, c);
	if( sum - big > big)
		return 1;
	else return 0;
}