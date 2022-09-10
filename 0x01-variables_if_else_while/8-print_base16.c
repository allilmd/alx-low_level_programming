#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'to print all numbers in base 16'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char ch;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
