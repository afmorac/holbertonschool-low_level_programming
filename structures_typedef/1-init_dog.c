#include "dog.h"

/**
 * init_dog - inicializa una estructura de tipo dog
 * @d: puntero a la estructura dog
 * @name: nombre del perro
 * @age: edad
 * @owner: dueño
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
