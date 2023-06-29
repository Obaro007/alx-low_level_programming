#include <string.h>

/**
 * _strncat - The program concatenates two strings.
 * @dest: The string to append to
 * @src: The string to append
 * @n: The number of chracters to append.
 *
 * Return: A new string or chracters
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, len = strlen(dest);

	for (i = 0, j = len; i < n && src[i] != '\0'; j++, i++)
	{
		dest[j] = src[i];
	}

	dest[j] = '\0';

	return (dest);
}
