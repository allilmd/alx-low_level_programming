#include "main.h"
/**
 * print_alphabet_x10 - print a - z ten times
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char alphabet;

	while (i < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		i++;
	}
}
