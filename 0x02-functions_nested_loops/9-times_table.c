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

	for (multi1 = 0; multi1 < 10; multi1++)
	{
		for (multi2 = 0; multi2 < 10; multi2++)
		{
			result = multi1 * multi2;
			_putchar(result + '0');
			_putchar(',');
			_putchar('\n');
			if (multi2 == 9)
				_putchar('\n');
		}
	}
}
