#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Program checks if the charater is uppercase or not.
 *
 *@c: The character to be checked.
 *
 * Return: Returns 1 or 0, depending on the char.
 */
int _isalpha(int c)
{
	return (isalpha(c) ? 1 : 0);
}
