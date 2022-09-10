#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print_numberz.c
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);
	return (0);
}
