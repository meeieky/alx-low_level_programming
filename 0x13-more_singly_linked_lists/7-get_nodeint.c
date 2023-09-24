#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node
 * @head: Pointer returns the nth node
 * @index: index is the index of the node, starting at 0
 *
 * Return: Node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
