#include <stdio.h>

/**
 * main - The program that prints its name, followed by a new line.
 * @argc: Counts the number of arguments supplied to the program.
 * @argv: Array of strings that are the arguments passed to the program.
 *
 * Return: Always 0 (Success)
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
