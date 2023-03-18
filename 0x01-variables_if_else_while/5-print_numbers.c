#include <stdio.h>

/**
 * main - function execution begins at main
 * print_digit: variable that stores the digit
 * Return: Always zero(0) for success
 */
int main(void)
{
	int print_digit;

	for (print_digit = '0'; print_digit <= '9'; print_digit++)
		putchar(print_digit);
	putchar('\n');

	return (0);
}
