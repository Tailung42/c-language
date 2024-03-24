#include <stdio.h>
void draw(int h);
int  main ()
{
    int h;
    printf("Height: ");
    scanf("%d", &h);
    draw(h);
    return 0;

}
void draw(int h)
{
    if ( h == 0)
    {
        // printf("#");
        return;
    }
    draw(h -1);
    for (int i = 1; i <= h; i++)
    {
        printf("# ");
    }
      printf("\n");
}