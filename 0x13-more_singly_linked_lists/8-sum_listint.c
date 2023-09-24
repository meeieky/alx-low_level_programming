#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data (n)
 * @head: First node in listint_t linked list.
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
