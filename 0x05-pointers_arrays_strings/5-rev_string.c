#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string
 * Return: 0 Always (success)
 */

void rev_string(char *s)
{
	int len = 0, index = 0;

	char tmp;

	while (s[index++])
	{
		len++;
	}

	for (index = len - 1; index >= len / 2; index--)
	{
	tmp = s[index] = s[len - index - 1];
	s[len - index - 1] = tmp;
	}
}
