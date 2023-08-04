#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number to set
 * @index: The index of the number to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int left_shift;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	left_shift = 1 << index;

	*n = *n | left_shift;

	return (1);
}
