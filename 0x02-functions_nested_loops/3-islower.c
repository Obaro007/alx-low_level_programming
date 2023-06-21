#include "main.h"
#include <ctype.h>

/**
 * _islower - Program checks if the charater is lowercase or not.
 *
 *@c: The character to be checked.
 *
 * Return: Returns 1 or 0, depending on the char.
 */
int _islower(int c)
{
	return (islower(c) ? 1 : 0);
}
