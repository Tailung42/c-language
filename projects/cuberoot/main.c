#include <stdio.h>
#include "cuberoot.h"

int main(void)
{
    float num;
    printf("Enter a number to find cube root:  ");
    scanf("%f", &num);
    double result = qroot(num);
    printf("CubeRoot: %lf", result);
    return 0;
}
