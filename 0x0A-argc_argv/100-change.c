#include <stdio.h>
#include <stdlib.h>

/**
 * main - The program prints the minimum number of coins to make change for an
 * amount of money.
 * @argc: Counts the number of arguments supplied to the program.
 * @argv: Array of strings that are the arguments passed to the program.
 *
 * Return: 1 if the number of arguments besides the name is is not eactly 1
 * 0 if the argument is negative and 0 if successful.
 */
int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int i, num, cents, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	for (i = 0; i < 5 && cents > 0; i++)
	{
		num = cents / coins[i];
		change += num;
		cents %= coins[i];
	}

	printf("%d\n", change);

	return (0);
}
