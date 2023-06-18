#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: The program prints out alphabets in lowercase in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
