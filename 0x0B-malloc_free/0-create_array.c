#include "main.h"
#include <stdlib.h>

/*
 * *create_array - Creates an array of chars
 *@size - size of the array
 *@c - chars to assign
 * Return: pointer to array, NULL if fail
 * Description - It creates an array of chars and initalize it
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
