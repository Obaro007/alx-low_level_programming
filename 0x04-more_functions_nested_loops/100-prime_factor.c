#include <stdio.h>
#include <math.h>

/**
 * main - The program finds and prints the largest prime factor of the number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, arr[100], length = 0;
	long num = 612852475143;

	for (i = 2; i <= sqrt(num); i++)
	{
		while (num % i == 0)
		{
			num /= i;
			arr[length++] = i;
		}
	}

	if (num > 1)
	{
		arr[length++] = num;
	}

	printf("%d\n", arr[length - 1]);

	return (0);
}
