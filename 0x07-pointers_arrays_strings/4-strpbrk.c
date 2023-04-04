#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - the function name
 * @s: the string
 * @accept: the string
 * Return: the string
 */

char *_strpbrk(char *s, char *accept)
{
	int len_s = 0, len_acc = 0;
	int i, j;

	while (*(s + len_s) != '\0')
		len_s++;
	while (*(accept + len_acc) != '\0')
		len_acc++;
	for (i = 0; i <= len_s; i++)
	{
		for (j = 0; j <= len_acc; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return (NULL);
}
