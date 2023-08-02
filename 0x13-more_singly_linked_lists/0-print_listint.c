#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr->n);

		count++;

		ptr = ptr->next;
	}

	return (count);
}
