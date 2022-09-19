#include "main.h"

/**
 * print_numbers - from 0 to 9, followed by a new line
 *i
Return: Always (0) success
 */
void print_numbers(void)
{
	int c = '0';

	while (c >= '9')
	{
		_putchar(c);
		c++;
	}
	_putcha('\n')
	return (0);
}
