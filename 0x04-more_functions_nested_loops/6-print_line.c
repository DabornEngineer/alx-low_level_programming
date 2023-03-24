#include "main.h"

/**
 * print_line - a function that prints line
 * @n: variable for printing line
 */

void print_line(int n)
{
	int get_line;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (get_line = 0; get_line < n; get_line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
