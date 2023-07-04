#include <stddef.h>

/**
 * _strstr - The program finds a substring in a string.
 * @haystack: The string to check.
 * @needle: The string or bytes to check for.
 *
 * Return: A pointer to the beginning of the locate substring NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
		return (NULL);
}
