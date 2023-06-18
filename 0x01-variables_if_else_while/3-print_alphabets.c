#include <stdio.h>

/**
 * Main _ Entry Point
 *
 * Description:  A program that prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char c;
	for (c='a'; c<='z'; c++)
	{
		putchar(c);
	}

	for (c='A'; c<='Z'; c++)
	{
		putchar(c);
	}

	putchar('/n');

	return (0);
}
