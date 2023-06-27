#include "main.h"
#include <ctype.h>

/**
 * _isdigit - The program checks if the charater is a digit or not.
 *
 * @c: The character to be checked.
 *
 * Return: Returns 1 or 0, depending on the char.
 */
int _isdigit(int c)
{
	return (isdigit(c) ? 1 : 0);
}
