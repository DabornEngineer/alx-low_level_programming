#include <stdio.h>

/**
 * main - Program execution begings
 * num_1: stores the value of the first digit
 * num_2: stores the value of the second digit
 * num_3: stores the value of the third digit
 * Return: always zero for success
 */
int main(void)
{
	int num_1, num_2, num_3;

	for (num_1 = 0; num_1 < 8; num_1++)
	{
		for (num_2 = num_1 + 1; num_2 < 9; num_2++)
		{
			for (num_3 = num_1 + 2; num_3 < 10; num_3++)
			{
				if (num_3 < num_2)
					continue;
				putchar(num_1 + '0');
				putchar(num_2 + '0');
				putchar(num_3 + '0');
				if (num_1 == 7 && num_2 == 8 && num_3 == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
