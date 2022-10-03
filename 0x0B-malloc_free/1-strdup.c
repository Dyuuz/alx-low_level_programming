#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *o;
	int x, y;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		;

	o = malloc(x * sizeof(*o) + 1);
	if (o == NULL)
		return (NULL);

	for (y = 0; y < x; y++)
		o[y] = str[y];
	o[y] = '\0';

	return (o);
}
