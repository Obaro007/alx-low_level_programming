#include <stdio.h>

/**
 * main - The program prints all the arguments it receives.
 * @argc: Counts the number of arguments supplied to the program.
 * @argv: Array of strings that are the arguments passed to the program.
 *
 * Return: Always 0 (Success)
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
