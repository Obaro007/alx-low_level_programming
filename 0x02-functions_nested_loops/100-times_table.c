#include "main.h"

/**
 * print_times_table - The program prints n times table, starting with 0.
 * @n: The number of times to print the table
 */
void print_times_table(int n)
{
	int i, j, times;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			times = i * j;

			if (times <= 9)
			{
				if (j != 0)
				{
				_putchar(' ');
				_putchar(' ');
				}
				_putchar('0' + times);
			}
			else if (times < 100)
			{
				_putchar(' ');
				_putchar('0' + (times / 10));
				_putchar('0' + (times % 10));
			}
			else
			{
				_putchar('0' + (times / 100));
				_putchar('0' + (times / 10) % 10);
				_putchar('0' + (times % 10));
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
