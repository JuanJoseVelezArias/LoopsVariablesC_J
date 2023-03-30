#include <stdio.h>

int main()
{
    char Letra = 'a';
    while (Letra <= 'z') {
        if (Letra == 'e'){
            Letra++;
        }
        else if (Letra == 'q'){
            Letra++;
        }
        putchar(Letra);
        Letra++;
    }
    putchar('\n');
    return (0);
}