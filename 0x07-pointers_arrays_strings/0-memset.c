/**
 * _memset - The program fills the memory with a constant byte.
 * @s: Pointer to the memory area.
 * @b: Constant bytes.
 * @n: The size of the memory area to fill.
 *
 * Return: s, the pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
