#include "main.h"

/**
 * _puts - the function name
 * @str: The string
 */

void _puts(char *str)
{
	int c = 0;

	while (*(str + c) != '\0')
	{
		_putchar(*(str + c));
		c++;
	}
}
