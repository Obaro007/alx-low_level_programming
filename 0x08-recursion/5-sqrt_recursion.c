#include "main.h"

/**
 * _sqrt_recursion - The function that returns the natural square root of
 * a number.
 * @n: The number to return its sqare root.
 *
 * Return: The square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (n);

	return (sqrt_helper(n, 2));

}


/**
 * sqrt_helper - Recursive function to find the square root.
 * @n: The number to calculate the square root of.
 * @i: The current guess for the square root.
 *
 * Return: The square root of the number 0r -1.
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);

	else if (i * i > n)
		return (-1);

	else
		return (sqrt_helper(n, i + 1));

}
