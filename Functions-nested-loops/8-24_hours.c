#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_sign - detects lowercase and non-lowercase letters
 *@c The character
 * Return: Always 0.
 */   

void jack_bauer(void)
{
    int H, M;

    for ( H = 0; H < 24; H++)
{
        for (M = 0; M < 60; M++)
        {
            printf("%02d:%02d\n", H, M);
        }
        
}
}