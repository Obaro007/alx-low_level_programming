#include "main.h"

/**
 * reverse_array - The program reverses the content of an array of integers.
 * @a: The array
 * @n: The number of elements in the array
 *
 */
void reverse_array(int *a, int n)
{
	int *i, *j, tmp;

	for (i = a + n - 1, j = a; j < i; i--, j++)
	{
		tmp = *j;
		*j = *i;
		*i = tmp;
	}

}

