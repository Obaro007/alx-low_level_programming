#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point
 *
 * Description: Assign a random number to the variable n, in order to print the last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last_dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_dgt = n % 10;

	if (last_dgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dgt);
	}
	else if (last_dgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_dgt);
	}
	else if (last_dgt < 6 && last_dgt != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dgt);
	}

	return (0);
}
	
