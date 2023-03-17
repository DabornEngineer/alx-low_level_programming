#include <stdio.h>

/**
 * main - function execution begins
 * count: variable that loops through the for loop
 * Return: Always zero(0) for success
 */
int main(void)
{
	int count;

	for (count = 'a'; count <= 'z'; count++)
	{
		putchar(count);
		putchar('\n');
	}

	return (0);
}
