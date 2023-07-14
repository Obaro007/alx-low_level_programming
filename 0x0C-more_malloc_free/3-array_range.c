#include <stdlib.h>

/**
 * array_range - The program creates an array of integers.
 * @min: Minimum value.
 * @max: Maximum value.
 *
 * Return: Pointer to newly created array on success or NULL if it fails.
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	for (i = 0; arr != NULL && i < size; i++, min++)
	{
		arr[i] = min;
	}

	return (arr);
}
