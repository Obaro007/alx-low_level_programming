#include "main.h"

/**
 * is_prime_number - The program checks if a number is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (prime_number(n, 2));
}


/**
 * prime_number - Helper function to find prime number.
 * @n: The orignal number to check.
 * @i: Other numbers to see if they are evenly divisible.
 *
 * Return: 1or Zero.
 */
int prime_number(int n, int i)
{
	if (i == n)
		return (1);

	else if (n % i == 0)
		return (0);

	return (prime_number(n, i + 1));
}
