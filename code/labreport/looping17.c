#include <stdio.h>
void main()
{
    int lim = 20;
    int cur = 0, nex = 1, temp;
    while(cur <= lim)
    {
        printf("%d \n", cur);
        temp = cur;
        cur = nex;
        nex = temp + nex;
    }
}