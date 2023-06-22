#include "main.h"
#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long num1 = 1, num2 = 2;

	for (i = 0; i < 48; i += 2)
	{
		printf("%lu, %lu, ", num1, num2);

		num1 = num1 + num2;
		num2 = num1 + num2;
	}

	printf("%lu", num1);
	printf(", %lu\n", num2);

	return (0);
}
