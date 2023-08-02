#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, **visited_nodes = NULL;
	size_t node_count = 0, max_nodes = 10, i;

	visited_nodes = malloc(max_nodes * sizeof(const listint_t *));
	if (!visited_nodes)
		exit(98);

	while (current)
	{
		int already_visited = 0;

		for (i = 0; i < node_count; i++)
		{
			if (visited_nodes[i] == current)
			{
				already_visited = 1;
				break;
			}
		}
		if (already_visited)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
		if (node_count == max_nodes)
		{
			max_nodes *= 2;
			visited_nodes = realloc(visited_nodes, max_nodes *
					sizeof(const listint_t *));

			if (!visited_nodes)
				exit(98);
		}
		visited_nodes[node_count++] = current;
		printf("[%p] %d\n", (const void *)current, current->n);
		current = current->next;
	}

	free(visited_nodes);
	return (node_count);
}
