#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Counts the number of arguments supplied to the program.
 * @argv: Array of strings that are the arguments passed to the program.
 *
 * Return: The result of the operation entered by the user or Error if
 * the number of args is less than the required or 0 always (Success).
 */
int main(int argc, char *argv[])
{
	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
