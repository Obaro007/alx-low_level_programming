#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: First number to compare
 * @m: Second number to compare
 *
 * Return: The number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int flip_count = 0;

	while (flip != 0)
	{
		flip_count += flip & 1;
		flip >>= 1;
	}

	return (flip_count);
}
