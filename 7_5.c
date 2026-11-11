#include <stdio.h>
#include <ctype.h>


int funk(int n);
int rfunk(int n, int d);

int main(void)
{
    int n;
    int u = 0;
    int d = 0;
    scanf("%d", &n);
    printf("%d\n", funk(n));
    printf("%d", rfunk(n, d));
    return 0;
}   

int funk(int n)
{
    int u = 0;
    for (int i = 0; n > 0; i++)
    {
        u = u * 10 + (n % 10);
        n /= 10;
    }
    return u;
}

int rfunk(int n, int d)
{
    int u = 0;
    if ((n) == 0) 
    {
        return d;
    }
    return rfunk(n / 10, d * 10 + (n % 10));;
}