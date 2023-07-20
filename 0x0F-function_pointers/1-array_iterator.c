u#include <stddef.h>

/**
 * array_iterator - The program executes a function given as a parameter on
 * each element of an array.
 * @array: The array to iterate on
 * @size: The size of the array
 * @action: Apointer to the fucntion that will be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
