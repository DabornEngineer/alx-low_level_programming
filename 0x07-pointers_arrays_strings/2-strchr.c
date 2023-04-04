#include "main.h"
#include <stddef.h>

/**
 * _strchr - the function name
 * @s: the string
 * @c: the character
 * Return: the first appearance
 */
char *_strchr(char *s, char c)
{
	int count = 0;
	int loop = 0;

	while (*(s + count))
	{
		count++;
	}
	for (loop = 0; loop < count; loop++)
	{
		if (c == *(s + loop))
			return (s + loop);
	}
	return (NULL);
}
