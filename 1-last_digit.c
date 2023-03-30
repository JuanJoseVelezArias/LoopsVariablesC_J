#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
	int n;
	srand(time(0));
	n = rand();
	int Ud = n % 10;
    printf("The last digit of %i is %i ", n, Ud);
    if (Ud > 5){
        printf("and is greater than 5\n");
    }else if (Ud == 0){
        printf("and is 0\n");
    }else{
        printf("and is less than 6 and not 0\n");
    }return (0);
}