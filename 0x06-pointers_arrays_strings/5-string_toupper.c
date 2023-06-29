#include <ctype.h>

/**
 * string_toupper - The function changes all lowercase letters of a string
 * to uppercase.
 * @str: The string to change its characters
 *
 * Return: The str, the updated string.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0;  str[i] != '\0'; i++)
	{
		if (islower(str[i]))
			str[i] = (char)toupper((unsigned char)str[i]);

	}

	return (str);
}

