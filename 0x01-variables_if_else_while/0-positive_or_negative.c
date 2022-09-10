#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	if(n > 5)
	{
	printf("Last digit of n is %d greater than 5\n", n);
	}
	if(n == 0)
	{
	printf("Last digit of n is %d and is 0\n", n);
	}
	if(n < 6 && n != 0)
	{
	printf("Last digit of n is %d and is less than 6 and not 0\n", n);
	}

	return (0);
}
