#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a[5];
	int *r;

	r = &a[2];
	*(r + 2) = 98; _putchar('\n');
	/* your code goes there */

	return (0);
}
