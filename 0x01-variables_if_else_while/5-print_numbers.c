#include <stdio.h>

/**
 * Main - Entry Point
 *
 * Description:  Prints all single digit numbers of base 10 starting from 0
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
