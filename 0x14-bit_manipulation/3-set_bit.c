#include "main.h"
#include "stdio.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to the number to change
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >> 7)
		return (0);

	*n = ((7 << index) | *n);
	return (1);
}
