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
	int c;
	for (i = 48; i <= 56; i++)
	{
		for (c = 49; c <= 57; c++)
		{
			if (c > i)
			{
				putchar(i);
				putchar(c);
				if (i != 56 || c != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
