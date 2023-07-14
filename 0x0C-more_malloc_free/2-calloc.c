#include <stdlib.h>

/**
 * _calloc  - The program allocates memory for an array, using malloc..
 * @nmemb: The number of elements.
 * @size: Bytes size for each element.
 *
 * Return: Pointer to the allocated memory on success or NULL if it fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	ptr = arr;

	for (i = 0; arr != NULL && i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}

	return (arr);
}
