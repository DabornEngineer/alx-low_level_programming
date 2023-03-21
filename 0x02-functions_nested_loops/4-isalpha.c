#include "main.h"

/**
 * _isalpha - function that checks for alphabet
 * @c: takes the argument
 * Return: 1 for alphabet and 0 for non-alphabets
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
