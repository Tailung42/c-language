#include <stdio.h>
void printalpha(void);
int main (void)
{
	printalpha();
	return 0;
}
void printalpha(void)
{
	for (int i = 0; i < 25; i++)
	{
	  printf("%C\n", 'a' + i);

	}
}