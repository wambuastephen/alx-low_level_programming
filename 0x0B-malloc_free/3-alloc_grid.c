#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2D array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: On success, returns a pointer to the newly allocated 2D array.
 * Returns NULL if memory allocation fails or width/height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **grid;
if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}

