#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Prints out alphabets in lowercase except 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		(c != 'q' && c != 'e') ?  putchar(c) : 0;
	}

	putchar('\n');

	return (0);
}
