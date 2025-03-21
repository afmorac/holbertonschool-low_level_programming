/**
 * array_range - Crea un array de enteros desde min hasta max.
 * @min: Valor mínimo (incluido).
 * @max: Valor máximo (incluido).
 *
 * Return: Puntero al nuevo array o NULL si falla.
 */
#include <stdlib.h>

int *array_range(int min, int max)
{
int *array;
int i, size;

if (min > max)
return (NULL);

size = max - min + 1;

array = malloc(sizeof(int) * size);

if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = min + i;

return  (array);
}
