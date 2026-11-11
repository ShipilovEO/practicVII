#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int potoc;
    int i = 0;
    int all = 0;
    while((potoc = getchar()) != EOF)
    {
        if ((ispunct((char)potoc)) && (potoc == '!' || potoc == '?' || potoc == '.'))
        {
            i++;
        }
        all++;
    }
    printf("Количество предложений: %d\nКоличество символов: %d\n", i, all);
    return 0;
}   