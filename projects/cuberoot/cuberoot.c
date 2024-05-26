#include "cuberoot.h"

#define epsilon pow(10, -6)
flksflkashflkas
double qroot(double num)
{
    double a, b = 2, c;
    for ( a = 0; f(a, num) * f(a + 1, num) > 0; a++)
    {

    }
        b = a + 1;

    c = (a + b)/ 2;
    while ( (f(c, num) > 0 && f(c, num) > epsilon) || (f(c, num) < 0 && f(c, num) < -epsilon))
    {
        if (f(c, num) < 0)
        {
            a = c;
        }

       else  if (f(c, num) > 0)
        {
            b = c;
        }

        c = (a + b) / 2;
    }

    return c;
}

double f(double i, double CUBE)
{
    return i * i * i - CUBE;
}
