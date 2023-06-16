
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: It prints a string to standard error
 *
 * Return: 1, exit and terminate function
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", msg);

	return (1);
}

