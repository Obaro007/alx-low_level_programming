/**
 * int_index - The program searches for an integer
 * @array: The array to search
 * @size: The number of elements in the array
 * @cmp: A pointer to the function to be used to compare values
 *
 * Return: The index of the first element for which the cmp function
 * does not return 0 or -1 if no element matches or if size is less
 * than 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!(size <= 0) && (array && cmp))
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
