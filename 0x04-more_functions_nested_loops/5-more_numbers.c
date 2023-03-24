#include "main.h"

/**
 * more_numbers - prints numbers
 * num: the interger
 */

void more_numbers(void)
{
	int loop;
	int num;

	for (loop = 0; loop < 10; loop++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
