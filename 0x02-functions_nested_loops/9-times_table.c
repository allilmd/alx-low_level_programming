#include "main.h"

/**
 * times_table(void) - prints the 9 times table
 * starting from 0
 */

void times_table(void)
{
	int a, b;

	a = 0;

	while (a < 10)
	{
		b = 1;
		while (b <= 12)
		{
			_putchar((a * b) + '0');
			_putchar(', ');
			_putchar(' ');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
