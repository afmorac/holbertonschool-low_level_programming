/**
 * _calloc - Asigna memoria para un array usando malloc.
 * @nmemb: Número de elementos en el array.
 * @size: Tamaño en bytes de cada elemento.
 *
 * Return: Puntero a la memoria asignada, o NULL si falla.
 */
#include <stdlib.h>
#include "main.h"
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
char *char_ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);

char_ptr = (char *)ptr;
for (i = 0; i < (nmemb * size); i++)
char_ptr[1] = 0;

return (ptr);
}
