#include <stdio.h>

/**
 * main - function execution begins
 * print_num: variable that prints 1 to 100
 * Return: 0 for success
 */

int main(void)
{
	int print_num;

	for (print_num = 1; print_num <= 100; print_num++)
	{
		if (print_num % 3 == 0 && print_num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (print_num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (print_num % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", print_num);
		}
	}
	printf("\n");

	return (0);
}
