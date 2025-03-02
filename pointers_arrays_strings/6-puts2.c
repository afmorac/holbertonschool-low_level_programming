#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: Pointer to the string
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
putchar('(');
_putchar('0' + (i / 10));
_putchar('0' + (i % 10));
_putchar(')');
i += 2;
}
_putchar('\n');
}
