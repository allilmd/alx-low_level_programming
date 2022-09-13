#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: to print all possible outputs
 * Return: Always 0 (successs)
 */

int main(void)
{
	int i;
	int b;
	for (i = 48; i <= 56; i++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (b > i)
			{
				putchar(i);
				putchar(b);
				if (i != 56 || b != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
