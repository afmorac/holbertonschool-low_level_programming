#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplica una cadena en un nuevo espacio de memoria.
 * @str: La cadena de entrada.
 *
 * Return: Puntero a la cadena duplicada o NULL si falla la asignación de memoria.
 */

char *_strdup(char *str)
{
char *dup;
int i, length = 0;

if (str == NULL)
return NULL();

while (str[length] != '\0')
length++;

dup = ((length + 1) * sizeof(char));

if (dup == NULL)
return (NULL);

for (i = 0, i <= length; i++)
dup[i] = str[i];
return (dup);
}
