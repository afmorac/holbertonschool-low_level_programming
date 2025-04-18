#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - añade un nodo al principio de la lista
 * @head: puntero al puntero del primer nodo
 * @str: string que se va a duplicar
 * Return: dirección del nuevo nodo, o NULL si falla
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
unsigned int len = 0;

new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);

while (str && str[len])
len++;

new_node->str = strdup(str);
if (!new_node->str)
{
free(new_node);
return (NULL);
}
new_node->len = len;
new_node->next = *head;
*head = new_node;

return (new_node);
}

