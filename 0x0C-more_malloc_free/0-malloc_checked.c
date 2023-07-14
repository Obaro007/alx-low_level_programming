#include <stdlib.h>

/**
 * malloc_checked - The program allocates memory using malloc.
 * @b: The number of bytes of  memory to allocate
 *
 * Return: Pointer to the allocated memory on success or status value of 98
 * if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr)
		return (ptr);

	exit(98);
}
