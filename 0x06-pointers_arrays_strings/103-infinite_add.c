#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * infinite_add - The funtion adds two numbers.
 * @n1: String number one to be added
 * @n2: String number two to be added
 * @r : The buffer to store the result
 * @size_r: The buffer size
 *
 * Return: A pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1), len2 = strlen(n2), left = 0, i, j;
	int maxLen = (len1 > len2) ? len1 : len2, rLen;

	if (maxLen + 2  > size_r)
		return (0);

	r[maxLen + 1] = '\0';

	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
	{
		int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
		int digit2 = (j >= 0) ? (n2[j] - '0') : 0;

		int sum = digit1 + digit2 + left;

		left = sum / 10;

		r[maxLen] = (sum % 10) + '0';
		maxLen--;
	}

	if (left)
	{
		if (maxLen < 0)
			return (0);

		r[maxLen] = left + '0';
	}

	rLen = strlen(r);

	if (rLen > size_r)
		return (0);

	return (r);
}
