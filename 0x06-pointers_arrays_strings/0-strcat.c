#include "main.h"

/**
 * _strcat - The function nanme
 * @dest: The destination
 * @src: The source
 * Return: pointer to the destination
 */


char *_strcat(char *dest, char *src)
{
	int count_d = 0, count_s = 0;
	int i = 0;

	while (*(dest + count_d) != '\0')
	{
		count_d++;
	}
	while (*(src + count_s) != '\0')
	{
		count_s++;
	}
	for (i = 0; i <= count_s; i++)
	{
		*(dest + (count_d + i)) = *(src + i);
	}
	return (dest);
}
