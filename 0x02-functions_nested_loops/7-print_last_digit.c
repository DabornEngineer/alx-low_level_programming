#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @ld: the variable that holds the argument
 * value: gets the last digit
 * Return: the last digit
 */
int print_last_digit(int ld)
{
	int value;

	value = ld % 10;
	if (value < 0)
	{
		value = (value * (-1));
	}
	_putchar(value + '0');

	return (value);
}
