#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *@c: The character to check

Return: 1 if c is an alphbet. 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

