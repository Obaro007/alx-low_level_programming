#include "main.h"
#include <stdio.h>

/**
 * main - Prints even  Fibonacci numbers below 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int next, num1 = 1, num2 = 2, sum = 0;
	while (num1 <= 4000000)
	{
		if (num1 % 2 == 0)
		{
			sum += num1;
		}

		next = num1 + num2;
		num1 = num2;
		num2 = next;
	}

	printf("%d\n", sum);

	return (0);
}
