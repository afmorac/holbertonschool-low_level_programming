#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - crea una copia nueva de un string
 * @str: string original
 * Return: puntero al string copiado (nuevo)
 */

char *_strdup(char *str)
{
int i = 0, len = 0;
char *new;

if (!str)
return (NULL);

while (str[len])
len++;

new = malloc(sizeof(char) * (len + 1));
if (!new)
return (NULL);

for (; i < len; i++)
new[i] = str[i];
new[i] = '\0';

return (new);
}

/**
 * new_dog - crea un nuevo perro con copia de los datos
 * @name: nombre del perro
 * @age: edad
 * @owner: dueño del perro
 * Return: puntero al nuevo perro creado, o NULL si falla
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggo;

doggo = malloc(sizeof(dog_t));
if (!doggo)
return (NULL);

doggo->name = _strdup(name);
if (!doggo->name)
{
free(doggo);
return (NULL);
}

doggo->owner = _strdup(owner);
if (!doggo->owner)
{
free(doggo->name);
free(doggo);
return (NULL);
}

doggo->age = age;
return (doggo);
}
