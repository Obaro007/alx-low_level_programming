#include <stddef.h>
#include <string.h>

/**
 * _strpbrk - The program searches a string for any of a set of bytes.
 * @s: The string to check.
 * @accept: The string or bytes to check for.
 *
 * Return: A pointer to the first occurrennce of a byte in string s that
 * matches any bytes in accept or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	char *ptr = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (strchr(accept, s[i]))
		{
			ptr = &s[i];
			break;
		}
	}
		return (ptr);
}
