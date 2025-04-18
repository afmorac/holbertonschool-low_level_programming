#include "lists.h"

/**
 * list_len - cuenta cuántos nodos hay en la lista
 * @h: puntero al primer nodo
 * Return: cantidad de nodos
 */

size_t list_len(const list_t *h)
{
size_t count = 0;

while (h)
{
count++;
h = h->next;
}
return (count);
}
