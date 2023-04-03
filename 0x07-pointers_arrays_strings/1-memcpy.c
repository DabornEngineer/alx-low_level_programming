#include "main.h"

/**
 * _memcpy - the function name
 * @dest: the mem destination
 * @src: the source of the string
 * @n: the number of bytes
 * Return: the address of the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int loop = 0;

	for (loop = 0; loop < n; loop++)
	{
		*(dest + loop) = *(src + loop);
	}
	return (dest);
}
