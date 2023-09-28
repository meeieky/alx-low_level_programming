#include "main.h"
#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index.
 * @index: the index, starting from 0 of the bit you want to ge
 * @n: value of bit
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index > 8)

	return (-1);
	n = (n >> index) & 1;
	return (0);
}
