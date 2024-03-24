#include <stdio.h>
#include <math.h>

double sqrtof(double num)
{
    return sqrt(num);
}

int main()
{
    double num;
    printf("enter a number ");
    scanf("%lf", &num);
    printf("sqrt of %lf is %lf", num, sqrtof(num));
    return 0 ;
}