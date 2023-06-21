#include "main.h"

/**
 * print_sign- The program prints the sign of a number.
 *
 * @n: Integer to be checked.
 *
 * Return: Returns '+', '0' or 'i', depending on int n.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
