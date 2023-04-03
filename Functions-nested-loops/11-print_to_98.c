#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_sign - detects lowercase and non-lowercase letters
 *@c The character
 * Return: Always 0.
 */   

void print_to_98(int n) {
    int v;
    if (n <= 98){
        for (v = n; v < 99; v++)
        {
            printf("%d, ", v);
        }
        }
        else{
            for (v = n; v > 99; v--)
            {
                printf("%d, ", v);
            }
            }
        printf("\n");
    
}