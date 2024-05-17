#include <stdio.h>
// #include <stdlib.h>

int atoi(char *);

int main(void)
{
	while (1)
	{
		char * string = [10];
		printf("number: ");
		scanf("%s", string);
		printf(" integer: %d",atoi(string));
	}
}

int atoi(char * string)
{
	int num = 0, digit;
	if (string != 0x00)
	{
		for (int i = 0; string[i] != '\0'; i++)
		{
			digit = string[i] - '0';
			num = num * 10 + digit;
		}
		// return;./a    }

	return num;
}