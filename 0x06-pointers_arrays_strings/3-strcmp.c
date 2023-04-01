#include "main.h"

/**
 * _strcmp - the function name
 * @s1: the first string
 * @s2: the second string
 * Return: an int
 */

int _strcmp(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;

	while (*(s1 + len1) != '\0')
	{
		len1++;
	}
	while (*(s2 + len2) != '\0')
	{
		len2++;
	}
	if (len1 == len2)
		return (0);
	else if (len1 > len2)
		return (15);
	else
		return (-15);
}
