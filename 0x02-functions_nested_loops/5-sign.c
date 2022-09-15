#include "main.h"

/**
 * print_sign - prints the sihn of a number
 *
 * @n: The integer to be checked
 *
 * Return: 1 if greater than 0. 0 if equals 0. -1 if less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
	}
	return (0);
}

