#include <stdio.h>

/**
 * main - function execution beging at main
 * print_rev: variable that stores the character
 * Return: Always zero(0) for success
 */
int main(void)
{
	int print_rev;

	for (print_rev = 'z'; print_rev >= 'a'; print_rev--)
		putchar(print_rev);
	putchar('\n');

	return (0);
}
