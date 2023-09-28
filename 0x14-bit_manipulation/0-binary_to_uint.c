#include "main.h"
#include <stdio.h>
#include <stdint.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;
		if (!b)
	{
		if (b == NULL)
			return (0);
		if (*b != '0' && *b != '1')
			return (0);
			       dec_val = (dec_val << 1) + (*b - '0');
	}
	return (dec_val);
}
