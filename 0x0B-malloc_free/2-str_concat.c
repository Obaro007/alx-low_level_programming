#include <stdlib.h>
#include <string.h>

/**
 * str_concat - The program concatenates two strings.
 * @s1: String to concatenate.
 * @s2: String to concatenate.
 *
 * Return: Pointer to the concatenated string if successful or
 * NULL if it fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";


	str = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

	if (str)
	{
		strcpy(str, s1);
		strcat(str, s2);
	}

	return (str);

}
