#include "main.h"

/**
 * _abs - prints the basolute value of a number
 * @n: collects the interger
 * Return: value of abs
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (0);
	else
		return (n * (-1));
}
