#include "main.h"

/**
 * puts2 - the function name
 * @str: the string
 */

void puts2(char *str)
{
	int i = 0;
	int count = 0;

	while (count >= 0)
	{
		if (*(str + count) == '\0')
			break;
		count++;
	}

	for (i = 0; i < (count - 1); i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
