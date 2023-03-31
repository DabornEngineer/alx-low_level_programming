#include <stdio.h>
#include <math.h>

/**
 * main - function execution begins at main
 * Return: always zero
 */

int main(void)
{
	long long num = 612852475143;
	long maxf = 0;
	double square = sqrt(num);
	int loop;

	for (loop = 1; loop <= square; loop++)
	{
		if (num % loop == 0)
		{
			maxf = loop;
			num /= loop;
		}
	}
	printf("%ld\n", maxf);

	return (0);


}
