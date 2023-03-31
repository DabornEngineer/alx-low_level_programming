#include "main.h"

/**
 * puts_half - function name
 * @str: the string
 */

void puts_half(char *str)
{
	int i = 0;
	int n = 0;
	int count = 0;

	while (*(str + count) != '\0')
	{
		count++;
	}
	if ((count % 2) != 0)
	{
		n = (count - 1) / 2;
		for (i = (n + 1); i < count; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		n = count / 2;
		for (i = n; i < count; i++)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');

}
