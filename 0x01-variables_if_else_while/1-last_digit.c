#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: The last digit
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int lastint;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastint = n % 10;

	if ( lastint > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastint); 
	}
	if ( lastint == 0 )
	{
		printf("Last digit of %d is %d and is 0\n", n, lastint);
	}
	if ( lastint < 6 &&  lastint != 0 )
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastint);
	}

	return (0);
}
