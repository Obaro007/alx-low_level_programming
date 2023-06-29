#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a[5];
	int *p;

	p = &a[2];
	*(p + 2) = 98;
	_putchar('\n');

	return (0);
}
