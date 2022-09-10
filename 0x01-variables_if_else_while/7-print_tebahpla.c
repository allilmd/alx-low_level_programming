#include <stdio.h>
/**
 * main - Entry point
 *
 * Description : alphabets in reverse
 *
 * Return: ALways 0 (success)
 */

int main(void)
{
	char new;

	for (new = 'z'; new >= 'a'; new--)
	{
		putchar(new);
	}

	putchar('\n');

	return (0);
}
