#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: pointer to the address of the  memory area
 * @n: bytes of memory for the value and when changed
 * @b: constant byte for the value
 *
 * Return: the memory area of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
