#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef uint8_t byte;

int main(int argc, char* argv[])
{
	if(argc != 3)
	{
		printf("usage fault\n");
		return 1;
	}
	FILE * src = fopen(argv[1], "rb");
	if(src == NULL)
	{
		printf("file not fount\n");
		return 2;
	}
	FILE * dst = fopen(argv[2], "wb");
	if(dst == NULL)
	{
		printf("file not found\n");
	}

	byte b;

	while(fread(&b, sizeof(b), 1, src) != 0)
	{
		fwrite(&b, sizeof(b), 1, dst);
	}

	fcolose(src);
	fclose(dst);
}