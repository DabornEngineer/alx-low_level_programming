#include "main.h"

/**
 * _strcpy - The function that copies the string
 * @dest: The destination
 * @src: The source
 * Return: The string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int count = 0;

	while (*(src + count) != '\0')
	{
		count++;
	}
	for (i = 0; i <= count; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
