#include <stdio.h>

/**
 * main - A program that finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long num1 = 1, num2 = 2;

	for (i = 0; i < 96; i += 2)
	{
		printf("%lu, %lu, ", num1, num2);

		num1 = num1 + num2;
		num2 = num1 + num2;
	}

	printf("%lu", num1);
	printf(", %lu\n", num2);

	return (0);
}
