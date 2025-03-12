#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Libera una cuadrícula bidimensional de enteros.
 * @grid: Puntero a la cuadrícula.
 * @height: Número de filas de la cuadrícula.
 *
 * Return: Nada.
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0)
return;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
