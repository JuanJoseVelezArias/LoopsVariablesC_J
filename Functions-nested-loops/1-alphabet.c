#include "main.h"
/**
 * print_putchar - prints the putchar world
 * @a character
 *returns nothing
*/
void print_alphabet (void){
    char Letra = 'a';
    while(Letra <= 'z'){

       _putchar(Letra);
       Letra++; 
    }
    _putchar('\n');
}