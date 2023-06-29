#include <string.h>

/**
 * _strncpy - The program copies a string
 * @dest: Where the string is copied to
 * @src: The string to copy from
 * @n: The number of chracters to copy from
 *
 * Return: A new string or chracters
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * if i is less than 'n - 1' (The null character) and the current
	 * char in src isn't null, then copy src char into dest.
	 */

	for (i = 0; i <= n - 1 && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i <= n - 1; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
