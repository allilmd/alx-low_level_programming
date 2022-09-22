#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string pointer under consideration
 *
 * Return: 1 (success), 0 otherwise
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
