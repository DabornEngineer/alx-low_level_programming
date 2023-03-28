#include "main.h"

/**
 * swap_int - the function name
 * @a: the first variable
 * @b: the second variable
 */

void swap_int(int *a, int *b)
{
	int swap_a, swap_b;

	swap_a = *b;
	a = swap_a;
	swap_b = *a;
	b = swap_b;
}
