/**
 * string_nconcat - Concatena dos strings hasta n bytes de s2.
 * @s1: Primer string.
 * @s2: Segundo string.
 * @n: Número máximo de bytes de s2 a concatenar.
 *
 * Return: Puntero al string concatenado, o NULL si falla.
 */
#include <stdlib.h>
#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1 = 0, len2 = 0, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

if (n > len2)
n = len2;

result = malloc(len1 + n + 1);
if (result == NULL)
return (NULL);

for (i = 0; i < len1; i++)
result[i] = s1[i];
for (j = 0, j < n; j++)
result[i + j] = '\0';

return (result);
}
