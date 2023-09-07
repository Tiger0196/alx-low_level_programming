#include "main.h"
#include <stdlib.h>

/**
 * argstostr - checks the code for ALX School students.
 * @ac: The integer
 * @av: The character
 * Return: Null or string.
 */
char *argstostr(int ac, char **av)
{
	int j, k, l, buffL;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	j = k = l  = buffL = 0;

	for (j = 0; av[j]; j++)
	{
		for (k = 0; av[j][k]; k++)
			l++;
	}
	p = (char *) malloc(l * sizeof(char) + ac + 1);
	if (p == NULL)
		return (NULL);
	for (j = 0; av[j]; j++)
	{
		for (k = 0; av[j][k]; k++, buffL++)
			p[buffL] = av[j][k];
		p[buffL] = '\n';
		buffL++;
	}
	p[buffL] = '\0';
	return (p);
}
