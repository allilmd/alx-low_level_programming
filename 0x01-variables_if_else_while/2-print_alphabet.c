#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print_alphabet
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
	putchar(ch);
	ch++;
	}
	putchar(10);
	return (0);
}
