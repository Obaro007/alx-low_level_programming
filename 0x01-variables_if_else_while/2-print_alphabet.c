#include <stdio.h>

/**
 * main - Entry Point
 *
 * Write a program that prints the alphabet in lowercase
 *
 */

int main(void)
	char c;
{
	for (c='a'; c<='z'; c++)
	{
		putchar(c);
	}

	putchar('/n');
	return 0;
}
