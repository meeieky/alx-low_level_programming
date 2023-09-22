#include <stdio.h>
#include "lists.h"

/**
 * print_list - A function that prints all the elements of a list_t list.
 * @h: If str is NULL, print [0] (nil)
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
