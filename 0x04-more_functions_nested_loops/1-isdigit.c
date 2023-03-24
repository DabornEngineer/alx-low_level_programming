#include "main.h"

/**
 * _isdigit - functions the checks for digit
 * @c: holds the digit
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
