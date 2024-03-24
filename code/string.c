#include <stdio.h>
#include <string.h>
void main()
{
    char name[20];
    // gets(name);
    scanf("%[^p]", name); // says read only till "p" is pressed;
    scanf("%[^\n]", name); // says read only till "new line" is pressed; ie. it reads white space :)
    printf("%s", name);
}
