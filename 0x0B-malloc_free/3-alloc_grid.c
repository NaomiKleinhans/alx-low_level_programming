#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * width: width of array
 * height: height of array
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0, j;

	if (height == 0 || width == 0)
		return (NULL);
	arr = (int **) malloc(sizeof(int) * width);
	if (arr != NULL)
	{
		for (; i < width; i++)
		{
			arr[i] = (int	*) malloc(sizeof(int) * height);
			if (arr[i] != NULL
			   )
			{
				for (j = 0; j < height; j++)
					arr[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(arr[i]);
					i++;
				}
				free(arr);
				return (NULL);
			}
		}
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
