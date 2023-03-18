#include <stdio.h>

/**
 * main - function execution begins
 * store_hex: A variable that stores the value of the hexadecimal
 * Return: Always zero for success
 */
int main(void)
{
	int store_hex;

	for (store_hex = '0'; store_hex <= '9'; store_hex++)
		putchar(store_hex);
	for (store_hex = 'a'; store_hex <= 'f'; store_hex++)
		putchar(store_hex);
	putchar('\n');

	return (0);
}
