#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - libera la memoria que usa un perro
 * @d: puntero al perro (dog_t)
 *
 * Esto libera el nombre, el owner y la estructura completa
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
