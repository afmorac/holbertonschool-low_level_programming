#include "main.h"

/**
 * print_line - Draws a straight line
 * @n: Number of times _ should be printed
 */
void print_line(int n)
{
int i;

if (n > 0)
{
for (i = 0; i < n; i++)
_putchar('_');
}
_putchar('\n');
}

