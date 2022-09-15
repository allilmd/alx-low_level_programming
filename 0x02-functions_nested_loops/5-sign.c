#include "main.h"

/**
 * print_sign - prints the sihn of a number
 *
 * @n - The integer to be checked
 *
 * Return: 1 if n is > 0. 0 if n is= 0. -1 if n is < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
	}
	else if (n < 0)
	{
		_putchar(45);
	}
	else if (n == 0)
	{
		_putchar(48);
	}
	return (-1);
}

