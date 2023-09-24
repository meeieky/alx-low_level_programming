#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Returs the number of elements on a linked listint_t list.
 * @h: Pointer to the head of the listint_t list.
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
