#include <string.h>

/**
 * leet - The program encodes a string into 1337
 * @str: The string to encode
 *
 * Return: The encoded string
 */
char *leet(char *str)
{
	char chars[] = "aAeEoOtTlL", replacements[] = "4433007711";
	int i, j, len = strlen(chars);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (str[i] == chars[j])
				str[i] = replacements[j];
		}
	}

		return (str);
}
