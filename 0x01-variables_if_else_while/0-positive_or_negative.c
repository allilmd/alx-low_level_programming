#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf("Last digit of n is %d greater than 5\n", n);
	}
	if(n == 0)
	{
		printf("Last digit of n is %d and is 0\n", n);
	}
	if(n < 0)
	{
		printf("Last digit of n is %d and is less than 6 and not 0\n", n);
	}

	return (0);
}
