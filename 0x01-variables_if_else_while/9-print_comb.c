#include <stdio.h>

/**
 * main - function execution begings at main
 * print_dig: stores the digit
 * Return: Always zero(0) for success
 */
int main(void)
{
	int print_dig;

	for (print_dig = '0'; print_dig <= '9'; print_dig++)
	{
		putchar(print_dig);
		if (print_dig == '9')
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
