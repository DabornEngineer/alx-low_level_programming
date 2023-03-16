#include <stdio.h>

/**
 * main - program execution begins at main
 * Return: always zero for success
 */

int main(void)
{
	long int c;
	long long int d;

	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}
