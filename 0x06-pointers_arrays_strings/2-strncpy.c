#include "main.h"

/**
 * _strncpy - The function name
 * @dest: The destination
 * @src: The source
 * @n: the interger
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count_d = 0, count_s = 0;
	int i;

	while (*(dest + count_d) != '\0')
	{
		count_d++;
	}
	while (*(src + count_s) != '\0')
	{
		count_s++;
	}
	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(str + i);
	}
	return (dest);
}
