#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet(void) - prints alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
