#include "main.h"
#include <string.h>

/**
 * is_palindrome - The program checks if a string is palindrome.
 * @s: The string to check.
 *
 * Return: 1 if palindrome 0r 0 if not.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
		return (1);

	return (palindrome(s, 0, len - 1));

}

/**
 * palindrome - A helper function for is_palindrome
 * to confirm if a string is palindrome or not.
 * @s: String to check
 * @i: To iterate the string from the left
 * @l: To iterate the string from the right
 *
 * Return: 1 if palindrome 0r 0 if not.
 */
int palindrome(char *s, int i, int l)
{
	if (i >= l)
		return (1);

	else if (s[i] != s[l])
		return (0);

	return (palindrome(s, i + 1, l - 1));
}

