#include <string.h>

/**
 * rot13 - The program encodes a string using ROT13 cipher.
 * @str: The string to encode.
 *
 * Return: The encoded string.
 */
char *rot13(char *str)
{
	int i, j, len = strlen(str);
	char *chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *replacements = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (str[i] == chars[j])
			{
				str[i] = replacements[j];
				break;
			}
		}
	}

	return (str);
}
