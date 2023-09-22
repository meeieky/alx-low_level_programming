#include <stdlib.h>
#include "lists.h"

/**
 * free_list - A function that frees a list_t list.
 * @head:  Frees a list_t list.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
