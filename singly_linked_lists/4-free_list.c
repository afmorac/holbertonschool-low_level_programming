#include <stdlib.h>
#include "lists.h"

/**
 * free_list - libera la memoria de todos los nodos
 * @head: puntero al primer nodo
 */

void free_list(list_t *head)
{
list_t *temp;

while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
