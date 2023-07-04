#include <string.h>

/**
 * _strspn - The program gets the length of a prefix substring.
 * @s: The string to check its initial segment.
 * @accept: Consits of the bytes from the string's initial segment.
 *
 * Return: The number of bytes in the initial segment.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (strchr(accept, s[i]))
			j++;
		else
			break;
	}

	return (j);
}
