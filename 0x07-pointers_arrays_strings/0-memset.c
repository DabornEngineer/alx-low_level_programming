#include "main.h"

/**
 * _memset - the function name
 * @s: the string
 * @b: the character to change to
 * @n: the integer
 * Return: the string scanged
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	for (count = 0; count < n; count++)
	{
		*(s + count) = b;
	}
	return (s);
}
