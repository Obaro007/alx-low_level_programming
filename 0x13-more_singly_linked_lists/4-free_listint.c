#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *cursor;

	while (head != NULL)
	{
		cursor = head;
		head = head->next;
		free(cursor);
	}
}
