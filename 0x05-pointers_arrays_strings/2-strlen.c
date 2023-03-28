#include "main.h"

/**
 * _strlen - length of string
 * @s: collects the string
 * Return: returns the length of the tsring
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
