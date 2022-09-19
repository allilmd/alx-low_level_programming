#include "main.h"

/**
 * times_table(void) : prints the 9 times table
 * starting from 0
 */

void times_table(void)
{
	int a, b;

	a = 9;

	while (a < 10)
	{
		b = 0;
		while (b <= 12)
		{
			_putchar(b * a);
			_putchar(',');
			_putchar('.');
			b++;
		}
		a++;
	}
}
