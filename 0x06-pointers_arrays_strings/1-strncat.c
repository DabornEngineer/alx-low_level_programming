#include "main.h"

/**
 * _strncat - The function name
 * @src: The source
 * @dest: The destination
 * @n: the interger
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
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
		*(dest + (count_d + i)) = *(src + i);
	}
	return (dest);
}
