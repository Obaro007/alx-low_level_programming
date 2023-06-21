#include "main.h"
#include "stdlib.h"

/**
 * print_last_digit - The program prints the last digit of a number.
 *
 * @n: The number to return its last digit.
 *
 * Return: Returns the last digit of int n.
 */
int print_last_digit(int n)
{
	int lastDigit = abs(n % 10);

	_putchar('0' + lastDigit);

	return (lastDigit);
}
