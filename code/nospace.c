#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef char* string;
int main (void)
{
    printf("Text: ");
    scanf("%[^\n]", word);
    // printf("%s", word);
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if( word[i] == ' ')
        {
            for (int j = i; j < n; j++ )
            {
                word[j] = word[++j];
            }
        }
    }
    printf("%s", word);
}