#include "main.h"

/**
 * jack_bauer - function name
 */
void jack_bauer(void)
{
	int digit1, digit2, digit3, digit4;

	for (digit1 = 0; digit1 < 3; digit1++)
	{
		for (digit2 = 0; digit2 < 4; digit2++)
		{
			for (digit3 = 0; digit3 < 6; digit3++)
			{
				for (digit4 = 0; digit4 < 10; digit4++)
				{
					_putchar(digit1 + '0');
					_putchar(digit2 + '0');
					_putchar(':');
					_putchar(digit3 + '0');
					_putchar(digit4 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
