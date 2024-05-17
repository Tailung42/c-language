#include <stdio.h>
#include <stdlib.h>
// #include <stdint.h>

int main(int argc, char * argv[])
{
    if(argc != 2)
    {
        return 1;
    }
    FILE * src;
    src = fopen(argv[1], "r");
    if(src == NULL )
    {
        printf("unable to open file.\n");
        return 2;
    }
    // FILE * src = fopen(argv[2], "w");
    char* string = malloc(10 * sizeof(char));
    fscanf(src, "%[^\n]", string);
    printf("%9s\n", string);
    fclose(src);


}