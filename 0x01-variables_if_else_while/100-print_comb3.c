#include <stdio.h>

/**
 * main - Peogram execution begins at main
 * num_1: stores the value of the first character
 * num_2: stores the value of the second character
 * Return: Always zeo(0) for success
 */
int main(void)
{
	int num_1, num_2;

	for (num_1 = 0; num_1 <= 9; num_1++)
	{
		for (num_2 = num_1 + 1; num_2 <= 9; num_2++)
		{
			if (num_2 < num_1)
				continue;
			putchar(num_1 + '0');
			putchar(num_2 + '0');
			if (num_1 == 8 && num_2 == 9)
				break;
			putchar(',');
		}
	}
	putchar('\n');

	return (0);
}
