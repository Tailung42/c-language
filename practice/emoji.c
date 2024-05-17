#include<stdio.h>
int main()
{
	float unit, bill;
	printf("Enter the electricity consumed unit : ");
	scanf("%f", &unit);

	if(unit <= 200)
	{
		bill = 0.5*unit;
	}
	else if (unit <= 400)
	{
		bill = 100 + 0.65*(unit - 200);
	}
	else if( unit <= 600)
	{
		bill = 230 + 0.8*(unit - 400);
	}
	else
	{
		bill = 390 + (unit - 600);
	}

	printf(" Bill amount = RS. %f", bill );
}