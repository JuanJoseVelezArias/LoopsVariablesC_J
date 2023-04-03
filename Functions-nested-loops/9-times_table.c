#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_sign - detects lowercase and non-lowercase letters
 *@c The character
 * Return: Always 0.
 */   

void times_table(void){
    int F, C;
    for (F = 0; F < 9; F++)
    {
        for (C = 0; C < 9; C++)
        {
            printf("%d,", F * C);
        }
        printf("\n");
    }
    
}