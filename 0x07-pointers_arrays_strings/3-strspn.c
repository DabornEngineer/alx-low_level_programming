#include "main.h"

/**
 * _strspn - the function name
 * @s: The string to be searched
 * @accept: the string to serach for
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int s_len = 0;
	unsigned int acc_len = 0;
	unsigned int i, j;
	unsigned int n_bytes = 0;

	while (*(s + s_len) != '\0')
		s_len++;
	while (*(accept + acc_len) != '\0')
		acc_len++;
	for (i = 0; i <= acc_len; i++)
	{
		for (j = 0; j <= s_len; j++)
		{
			if (*(accept + j) == *(s + i))
				n_bytes++;
		}
	}
	return (n_bytes);
}
