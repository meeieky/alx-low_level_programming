#include "main.h"
#include "stdio.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
