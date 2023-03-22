#include "main.h"

/**
 * times_table - function that prints 9 times table
 * multi1: value for multiplication
 * multi2: value for multiplication
 * result: the answer of the multiplication
 */
void times_table(void)
{
	int multi1, multi2;
	int result;
	int div, rem;

	for (multi1 = 0; multi1 < 10; multi1++)
	{
		for (multi2 = 0; multi2 < 10; multi2++)
		{
			result = multi1 * multi2;
			if (result > 9)
			{
				rem = result % 10;
				div = result / 10;
				_putchar(div + '0');
				_putchar(rem + '0');
			}
			if (result < 10)
				_putchar(result + '0');
			if (multi2 == 9)
			{
				_putchar('\n');
				continue;
			}
			_putchar(',');
			_putchar('\t');
		}
	}
}
