#include<stdio.h>
int sodIn(int);
int main()
{
	int num;
	printf("enter a number \n");
	scanf("%d", &num);
	printf("sum: %d", sodIn(num));
	return 0;
}

int sodIn(int num)
{
	int sum = 0;
	while(num != 1)
	{
		sum += num%10;
		num /= 10;
	}
	return sum;
}
