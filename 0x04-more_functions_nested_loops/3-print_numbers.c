#include "main.h"

/**
 * print_numbers - from 0 to 9, followed by a new line
 *
 */
void print_numbers(void)
{
	int i = '0';

	for (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putcha('\n')
}
