#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatena dos cadenas en una nueva memoria.
 * @s1: Primera cadena.
 * @s2: Segunda cadena.
 *
 * Return: Puntero a la nueva cadena concatenada,
 * o NULL si falla la asignación de memoria.
 */
char *str_concat(char *s1, char *s2)
{
char *new_str;
int i,j, len1 = 0, len2 = 0;

if (s1 != '\0')
while (s1[len1] != '\0')
len1++;

if (s2 != '\0')
while (s2[len2] != '\0')
len2++;

new_str = malloc((len1 + len2 + 1) * sizeof(char));

if (new_str == NULL)
return (NULL);

for (i = 0; i < len1; i++)
new_str[i] = s1[i];

for (j = 0; j < len2; j++)
new_str[i +j] = s2[j];

new_str[i + j] = '\0';
return (new_str);
}
