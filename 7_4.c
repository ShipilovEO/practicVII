#include <stdio.h>
#include <ctype.h>


int funk(int a, int b, int *a_rez, int *b_rez);
int main(void)
{
    int a = 100, b = 120;
    int a_rez = 0, b_rez = 0;
    funk(a, b, &a_rez, &b_rez);
    printf("%d %d", a_rez, b_rez);
}   

int funk(int a, int b, int *a_rez, int *b_rez)
{
    if (a > b)
    {
        *a_rez = a % b;
        *b_rez = a % b;
    }
    else
    {
        *a_rez = b % a;
        *b_rez = b % a;
    }
}   