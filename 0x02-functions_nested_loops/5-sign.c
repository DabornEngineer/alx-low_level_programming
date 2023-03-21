#include "main.h"

/**
 * print_sign - function tha print sign aan return a value
 * @n: variable that holds the argument passed
 * Return: 1 for posive 0 for 0 and -1 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
