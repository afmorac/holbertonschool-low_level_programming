#include <stdio.h>
#include "dog.h"

/**
 * print_dog - imprime los datos de un perro
 * @d: puntero a la estructura
 *
 * Si algo está en NULL, imprime "(nil)"
 * Si el puntero d está vacío, no imprime nada
 */

void print_dog(struct dog *d)
{
if (!d)
return;

printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

