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

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);

memset(ptr, 0, nmemb * size);
return (ptr);
}
