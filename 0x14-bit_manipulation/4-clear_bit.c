#include "main.h"
/**
 * clear_bit - sets the value of bit to 0
 * @index: index starting from 0
 * @n: the int to change
 * Return: 1 0r -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int i = 0;

	if (index > ((sizeof(n) * 8)))
		return (-1);
	i = 1 << index;
	*n = (*n & ~i) | ((0 << index) & i);
	return (1);
}
