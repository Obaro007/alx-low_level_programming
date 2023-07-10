#include <stdlib.h>

/**
 * create_array - The program creates an array of chars, and initializes it
 * with a specific char.
 * @size: The number of array to create.
 * @c: Char to initialize the array with.
 *
 * Return: Pointer to the array if successful or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	for (i = 0; i < size && arr != NULL; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
