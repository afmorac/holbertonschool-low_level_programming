#include "main.h"
#include <stdlib.h>
/**
 * create_array - Crea un array de caracteres
 * e inicializa cada posición con un carácter específico.
 * @size: Tamaño del array.
 * @c: Carácter con el que se inicializará el array.
 *
 * Return: Puntero al array, o NULL si falla la asignación de memoria.
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
return (NULL);

arr = malloc(size * sizeof(char));
if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = c;
return (arr);
}
