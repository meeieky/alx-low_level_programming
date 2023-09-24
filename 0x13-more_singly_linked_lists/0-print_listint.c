#include <stdio.h>

#include "lists.h"

/**
 * print_list - A function that prints all the elements of a listint_t
 * @h: Pointer to the head of the list
 * Return: Number of nodes
 */
size_t print_list(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
