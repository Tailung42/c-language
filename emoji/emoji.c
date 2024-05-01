#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[])
{
    // if argument doesn't match return with message
    if(argc != 2)
    {
        printf("usage: name.exe number\n");
        return 1;
    }
    
    int size = atoi(argv[1]);

    for (int row = size; row >= -size; row--)
    {
        for (int column = -size; column <= size; column++)
        {
            if((row * row + column * column < size * size) )
            {
                if((row < -size / 5) && (row * row + column * column < size * size * 0.8 * 0.8)
                 && (row * row + column * column > size * size * 0.7 * 0.7)    // for mouth
                  || ((row - size/ 5) * (row - size/ 5) + (column - size / 2) * (column - size / 2) < size * size * 0.3 * 0.3)
                  || ((row - size/ 5) * (row - size/ 5) + (column + size / 2) * (column + size / 2) < size * size * 0.3 * 0.3))  
                {
                printf("  ");

                }
                else
                {
                    printf("@ ");
                }
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}