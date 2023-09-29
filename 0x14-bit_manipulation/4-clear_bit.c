#include "main.h"
#include "stdio.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number to set value
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >> 7)
		return (0);

	*n = (~(7 << index) & *n);
	return (1);
}
