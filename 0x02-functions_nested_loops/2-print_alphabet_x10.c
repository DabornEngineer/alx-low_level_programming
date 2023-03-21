#include "main.h"

/**
 * print_alphabet_x10 - function that prints the alphabet 10 times
 * count: loop through 10 times
 * print_alpha: prints the alphabet
 */
void print_alphabet_x10(void)
{
	int count, print_alpha;

	for (count = 1; count <= 10; count++)
	{
		for (print_alpha = 'a'; print_alpha <= 'z'; print_alpha++)
		{
			_putchar(print_alpha);
		}
		_putchar('\n');
	}
}
