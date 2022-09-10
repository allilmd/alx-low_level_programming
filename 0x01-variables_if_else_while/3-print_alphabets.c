#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print A to Z and then in small letter
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)

	{
	putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
	putchar(i);
	}

	putchar(10);
	return (0);
}
