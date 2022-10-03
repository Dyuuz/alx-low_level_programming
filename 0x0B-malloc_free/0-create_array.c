#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars, and initialize it with a specified char
 * @size: size of the array
 * @c: specific char
 * Return: char pointer to malloc created memory address or NULL if error
 */

char *create_array(unsigned int size, char c)
{
	char *y;
	unsigned int a;

	if (size == 0)
		return (NULL);

	y = malloc(size * sizeof(*y));
	if (y == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		y[a] = c;

	return (y);
