#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to the head of the list
 * @idx: Index of the list where the new node should be added
 * @n: The numbers to add to the new list
 *
 * Return: Returns address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx,
		int n)
{
	listint_t *new_node, *current;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node)
	{
		new_node->n = n;
		new_node->next = NULL;

		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}

		current = *head;

		while (current && i < idx - 1)
		{
			current = current->next;
			i++;
		}

		if (!current)
		{
			free(new_node);
			return (NULL);
		}

		new_node->next =  current->next;
		current->next = new_node;
	}

	return (new_node);
}
