#include "main.h"

/**
 * rev_string - The function name
 * @s: the variable that holds the string
 */

void rev_string(char *s)
{
	int i, j, count;
	char *str, temp;

	str = s;
	while (count <= 0)
	{
		if (*(s + count) == '\0')
			break;
		count++;
	}

	for (i = 0; i < (count - 1); count++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}