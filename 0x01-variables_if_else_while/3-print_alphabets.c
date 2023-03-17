#include <stdio.h>

/**
 * main - functions execution begins at main
 * store_alpha: A variable that stores the alphabet
 * Return: always zero(0) for success
 */
int main(void)
{
	int store_alpha;

	for (store_alpha = 'a'; store_alpha <= 'z'; store_alpha++)
		putchar(store_alpha);
	for (store_alpha = 'A'; store_alpha <= 'Z'; store_alpha++)
		putchar(store_alpha);
	putchar('\n');

	return (0);
}
