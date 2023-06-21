#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar('0' + (h / 10));
			_putchar(('0' + h % 10));

			_putchar(':');

			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar('\n');

		}
	}
}
