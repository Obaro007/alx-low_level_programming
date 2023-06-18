#include <stdio.h>

/**
 * Main - Entry point
 *
 * Description: The Program prints out alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c='a'; c<='z'; c++)
	{
		(c != 'q' && c != 'e') ? putchar(0) : 0;
	}

	putchar('\n');

	return (0);
}
