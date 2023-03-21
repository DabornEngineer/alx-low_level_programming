#include "main.h"

/**
 * print_alphabet - function that prints the alphabet
 * print_alpha: variable that stores the alphabet
 * Return: always 0 for success
 */
void print_alphabet(void)
{
	int print_alpha;

	for (print_alpha = 'a'; print_alpha <= 'z'; print_alpha++)
	{
		_putchar(print_alpha);
	}
	_putchar('\n');


}


