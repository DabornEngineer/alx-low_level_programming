#include "main.h"

/**
 * print_rev - function that prints the reverse of a string
 * @s: holds the string
 */

void print_rev(char *s)
{
	int c, get_s;

	while (*(s + c) != '\0')
	{
		get_s = c++;
	}
	for (c = get_s; c >= 0; c--)
	{
		_putchar(*(s + c));
	}
	_putchar('\n');
}
