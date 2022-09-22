#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *
 * @a: integer 1 to be swapped.
 * @b: Integer 2 to be swapped.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
