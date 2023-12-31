#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: Pointer that frees a listint_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
