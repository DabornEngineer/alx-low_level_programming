#include "main.h"

/**
 * _islower - prints the lowercase of a passed argument
 * @c: argument that collect the character
 * lowercase: gets the lowercase
 * Return: 1 for lowercase and 0 for uppercase
 */
int _islower(int c)
{
	int lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (c == lowercase)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
