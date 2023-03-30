#include <stdio.h>

int main()
{
    char letra = 'a';
    while (letra <= 'z') {
        putchar(letra);
        letra++;
    }
        letra = 'A';
    while (letra <= 'Z') {
        putchar(letra);
        letra++;
    }
    putchar('\n');
    return (0);
}