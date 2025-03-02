#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: Pointer to the string
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0' && str[i + 1] != '\0') // Evita que i+2 pase el límite
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}

