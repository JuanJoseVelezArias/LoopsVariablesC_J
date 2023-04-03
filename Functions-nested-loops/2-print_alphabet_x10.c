#include "main.h"

/**
 * print_putchar - prints the putchar world
 * @a character
 *returns nothing
*/
void print_alphabet (void){
    int i;
    for(i = 0; i < 10; i++){  
 
        char Letra = 'a';
    
    while(Letra <= 'z'){

       _putchar(Letra);
       Letra++; 
    }
    _putchar(10);
    }
    _putchar('\n');
}