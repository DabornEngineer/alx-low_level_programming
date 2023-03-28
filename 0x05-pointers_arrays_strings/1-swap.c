#include "main.h"

/**
 * swap_int - the function name
 * @a: the first variable
 * @b: the second variable
 */

void swap_int(int *a, int *b)
{
	int swap_p;

	swap_p = *a;
	*a = *b;
	*b = swap_p;
}
