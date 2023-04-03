#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_sign - detects lowercase and non-lowercase letters
 *@c The character
 * Return: Always 0.
 */


int print_sign(int n){
    if (n > 0)
    {
         _putchar('+');
        return(1);
    }
    else if (n == 0)
    {
        
        _putchar('0');

        return(0);
    }
    else 
    { 
        _putchar('-');
        return(-1);
    }

    _putchar(10);
}