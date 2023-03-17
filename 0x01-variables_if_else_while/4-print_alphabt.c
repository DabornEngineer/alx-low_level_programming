#include <stdio.h>

/**
 * main - function execution begings at main
 * print_alpha: variable that prints the alphabet
 * Return: Always zero(0) for success
 */
int main(void)
{
	int print_alpha;

	for (print_alpha = 'a'; print_alpha <= 'z'; print_alpha++)
	{
		if (print_alpha == 'q' || print_alpha == 'e')
			continue;
		putchar(print_alpha);
	}
	putchar('\n');

	return (0);
}
