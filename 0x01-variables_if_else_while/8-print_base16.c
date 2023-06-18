#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c = 'a';

	for (i = 0; i <= 15; i++)
	{
		i < 10 ? putchar(i + '0') : putchar(c++);
	}

	putchar('\n');

	return (0);
}
