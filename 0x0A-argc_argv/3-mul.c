#include <stdio.h>
#include <stdlib.h>

/**
 * main - The funtion multiplies two numbers that are arguments.
 * @argc: Counts the number of arguments supplied to the program.
 * @argv: Array of strings that are the arguments passed to the program.
 *
 * Return: 0 as success or 1 if the number of arguments besides the
 * argument name is not equal to 2.
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);

}
