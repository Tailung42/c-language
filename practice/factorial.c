#include<stdio.h>
int factorial(int);
void main()
{
	int num;
	printf("you want the factoria of :");
	scanf("%d", &num);
	printf("the factorial of %d is %d", num , factorial(num));

}
int factorial(int num)
{
	if(num== 1)
	{
		return 1;
	}
int result = num * factorial(num -1);
}