#include <stdio.h>

/**
 * main - The program prints the number of argument passed to it.
 * @argc: Counts the number of arguments supplied to the program.
 * @argv: Array of strings that are the arguments passed to the program.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int argCount = argc - 1;

	printf("%d\n", argCount);

	return (0);
}
