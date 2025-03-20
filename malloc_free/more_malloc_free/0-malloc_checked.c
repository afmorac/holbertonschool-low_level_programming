/**
 * malloc_checked - Asigna memoria usando malloc.
 * @b: Tamaño de memoria a asignar en bytes.
 *
 * Return: Puntero a la memoria asignada o termina con estado 98 si falla.
 */
#include <stdlib.h>
#include "main.h"

void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}

