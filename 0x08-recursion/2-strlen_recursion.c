
/**
 * _strlen_recursion - The program the length of a string.
 * @s: The string to return its length.
 *
 * Return: An integer, the length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
