#include <stdio.h>

int main()
{
    char Letra = 'a';
    while (Letra <= 'z') {
        putchar(Letra);
        Letra++;
    }
    putchar('\n');
    return (0);
}