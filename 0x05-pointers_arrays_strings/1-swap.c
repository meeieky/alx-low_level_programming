#include "main.h"

/**
 * swap_int - Swaps the value of twi integers
 * @a: integer to swap
 * @b: integar to swap
 */
void swap_int(int *a, int *b)
{

	int m;

	m = *a;
	*a = *b;
	*b = m;
}
