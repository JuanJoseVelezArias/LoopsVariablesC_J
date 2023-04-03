#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_sign - detects lowercase and non-lowercase letters
 *@c The character
 * Return: Always 0.
 */
int print_last_digit(int v){

    int Ld;

    if (v < 0)
    {
        v = -v;
    }
    

    Ld = v % 10;

    _putchar(Ld + '0');

    return Ld;
}