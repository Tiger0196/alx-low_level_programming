#include "main.h"
#include <stdlib.h>

/**
 * _strdup - displays a copy of a string in a pointer
 * @str: string
 * Return: Null or string
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int k, l;

	if (str == NULL)
	{
		return (NULL);
	}
	for (k = 0; str[k] != '\0'; k++)
		;
	k++;
	if (k < 1)
		return (NULL);
	p = malloc(sizeof(char) * k);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (l = 0; l < k; l++)
		p[l] = str[l];
	p[l] = '\0';

	return (p);
}
