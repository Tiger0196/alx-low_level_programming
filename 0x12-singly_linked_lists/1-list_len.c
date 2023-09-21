#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* list_len - returns the number of elements in a
* linked list_t list
* @h: linked list
* Return: returns the number of elements in h
*/
size_t list_len(const list_t *h)
{
	int j = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str != NULL)
			j++;
		h = h->next;
	}
	return (j);
}
