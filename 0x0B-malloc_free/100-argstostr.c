#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenate all arguments of your program
 * @ac: argument count
 * @av: double pointer to array of strings passed to main
 * Return: Null if fail, else return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *i, *conc;
	int a, b, sum;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0, sum = 0; a < ac; a++)
	{
		for (b = 0; *(*(av + a) + b) != '\0'; b++, sum++)
			;
		sum++;
	}
	sum++;

	i = malloc(sum * sizeof(char));
	if (a == NULL)
		return (NULL);

	conc = i;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			*i = av[a][b];
			i++;
		}
		*i = '\n';
		i++;
	}

	return (conc);
}
