#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program execution begins at main
 * n: An interger variable that holds the value of the number to be tested
 * Return: always zero(0) for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
