#include <stdio.h>

/**
 * Main - Entry Point
 *
 * Description: program that prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}

	printf("%s", "\n");

	return (0);
}
