#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function concatenates the argument of program to string;
 *             arguments are sparsed by a new line in a string.
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 *         Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int ag, byte, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (ag = 0; ag < ac; ag++)
	{
		for (byte = 0; av[ag][byte]; byte++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	index = 0;

	for (ag = 0; ag < ac; ag++)
	{
		for (byte = 0; av[ag][byte]; byte++)
			str[index++] = av[ag][byte];

		str[index++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
