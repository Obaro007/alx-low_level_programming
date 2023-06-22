#include "main.h"

/**
 * times_table - The program prints the 9 times table, starting with 0.
 *
 * Description: Prints the 9 times table, starting with 0 inserts a space
 * between single numbers and two spaces if not single.
 *
 * Return: The multiplication of numbers from 0 - 9;
 */
void times_table(void)
{
	int i, j, times;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			times = i * j;

			if (times <= 9)
			{
				if (j != 0)
				{
				_putchar(' ');
				}
				_putchar('0' + times);
			}

			else
			{
				_putchar('0' + (times / 10));
				_putchar('0' + (times % 10));
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
