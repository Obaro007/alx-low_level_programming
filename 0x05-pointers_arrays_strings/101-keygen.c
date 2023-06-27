#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The program generates random valid passwords
 * for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char password[64];
	int i, sum = 0, n;

	srand(time(NULL));

	for (i = 0; i < 64; i++)
	{
		password[i] = rand() % 78 + '0';
		sum += password[i] - '0';
		putchar(password[i]);

		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	putchar('\n');

	return (0);
}
