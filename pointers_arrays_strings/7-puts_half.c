#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: Pointer to the string
 */
void puts_half(char *str)
{
int len = 0, n;
while (str[len] != '\0')
{
len++;
}
n = ( len + 1 ) / 2;
while ( str[n] != '\0')
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
