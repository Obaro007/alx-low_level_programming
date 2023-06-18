#include <stdio.h>

/**
 * Main - Entry Point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (1 = 0; i <= 10; c++)
	{
		putchar(i + '0');

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar("\n");

	return (0);
}
