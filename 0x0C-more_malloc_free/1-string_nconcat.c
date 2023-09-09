#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * @n: index
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1 = 0, size2 = 0, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
	n = size2;
	p = malloc((size1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (j = 0; j < size1; j++)
	{
		p[j] = s1[j];
	}

	for (; j < (size1 + n); j++)
	{
		p[j] = s2[j - size1];
	}
	p[j] = '\0';

	return (p);
}
