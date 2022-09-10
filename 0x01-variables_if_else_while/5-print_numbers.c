#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	i = 0;

	while(i < 10)
	{
		putchar(i);
		i = i + 1;
	}
	putchar(10);
	return (0);
}
