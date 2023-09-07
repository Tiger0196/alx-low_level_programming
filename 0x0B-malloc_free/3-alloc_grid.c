#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a grid of integers
 * @width: The width of the grid
 * @height: The height of the grid
 * Return: Null or the grid
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int k, l;

	k = l = 0;
	if (height <= 0)
	{
		return (NULL);
	}
	p = (int **)malloc(height * sizeof(p));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (k = 0; k < height; k++)
	{
		p[k] = malloc(width * sizeof(int));
		if (p[k] == NULL)
		{
			for (l = 0; l < width; l++)
				free(p[l]);
			free(p);
			return (NULL);
		}
		for (l = 0; l < width; l++)
		{
			p[k][l] = 0;
		}
	}
	return (p);


}
