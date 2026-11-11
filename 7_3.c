#include <stdio.h>
#include <math.h>

double func(double A, double B);
int main(void)
{
    double a,b;
    while (scanf("%lf %lf", &a, &b) == 2)
    {
        printf("%.4f\n", func(a, b));
    }
    return 0;
}

double func(double A, double B)
{
    return((fabs(A - B)) / (A + B));
}