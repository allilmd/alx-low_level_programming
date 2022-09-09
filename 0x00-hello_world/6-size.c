#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'prints the size of various types on the computer'
 *
 * return - Always 0 (success)
 */

int main(void)
{
	char c;
	int i;
	long int a;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));

	return (0);
}
