#include "main.h"
/**
 * print_alphabet_x10 : print a - z ten times
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char alphabet = 'a';

	while(i < 10)
	{
		while(alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		i++;
	}
}