#include "main.h"
#include <stdlib.h>

/**
* create_array - a function that creates an array of char and
* initializes it with a specific char
* @size: The size of the array
* @c: The character to create the array for
* Return: returns a pointer to the array,
* returns NULL if size = 0 or if malloc fails
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int k;

	if (size == 0)
		return (NULL);
	arr = (char *) malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < size; k++)
	{
		arr[k] = c;
	}
	return (arr);
}
