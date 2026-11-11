#include <stdio.h>
#include <ctype.h>
int main(void)
{   
    char potoc;
    while((potoc = getchar()) != EOF){
        if (isprint(potoc))
        {
            putchar(potoc);
            printf("\n");
        }
    } 
    return 0;
}