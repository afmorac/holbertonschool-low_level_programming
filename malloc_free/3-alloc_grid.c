#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Crea una cuadrícula bidimensional de enteros.
 * @width: Ancho de la cuadrícula.
 * @height: Altura de la cuadrícula.
 *
 * Return: Puntero a la cuadrícula creada, o NULL si falla la
 * asignación de memoria.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeofint());
if (grid[i] == NULL)
{
while (i >= 0)
{
free(grid[i]);
i--;
}
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
