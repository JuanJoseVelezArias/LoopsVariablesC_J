#include <stdio.h>

int main()
{int n;
    for (n = 0; n < 10; n++)
    {
        putchar(n + '0');
    }

    char letra = 'a';
    while (letra <= 'f') {
        putchar(letra);
        letra++;
    }
    putchar('\n');
    return 0;
}