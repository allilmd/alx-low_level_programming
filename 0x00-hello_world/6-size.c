#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - sizes
 *
 * return - zer always
 */
int main(void)
{
	int i;
	long int a;
	char c;
	long long int d;
	float e;

	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(a));

	return(0);
}
