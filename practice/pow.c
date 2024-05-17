#include<stdio.h>
int Pow(int , int );

void main()
{
	int num , pow;
	printf("enter the number \n");
	scanf("%d", &num);
	printf("enter the power \n");
	scanf("%d", &pow);

	int result = Pow(num , pow);
	printf(" the result is %d", result)  ;
}
int Pow(int num, int pow)
{
	int result = 1;
	for (int i = 0; i < pow; i++)
	{
		result *= num;
	}
	return result;
}