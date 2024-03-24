#include <stdio.h>
char* concat(char* dest, char* src);
void main()
{
    char* source = "Thapa";

    char* dest = "Bipin";
    // dest =  concat(dest, source);
    printf("%s", dest);
    
    // return 0;or
}


char* concat(char* dest, char* src)
{
    int len, i = 0;
    for ( len = 0; dest[len] != '\0'; len++)
    {}
    // for ( i = 0; src[i] != '\0'; i++)
    // {
    //     dest[len + i] = src[i];
    // }
    // dest[len + i] = '\0';
    do
    {
      dest[len + i] = src[i];
    }
    while(srt[i] != '\0');
    return  dest;