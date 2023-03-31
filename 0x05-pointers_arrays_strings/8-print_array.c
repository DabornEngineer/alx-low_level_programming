#include "main.h"
#include <stdio.h>

/**
 * print_array - function name
 * @a: the array
 * @n: the number of element
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (*(a + i) == *(a + (n - 1)))
			continue;
		else
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

}
