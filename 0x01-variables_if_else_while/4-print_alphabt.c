#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: remove q and e
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;

	i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
