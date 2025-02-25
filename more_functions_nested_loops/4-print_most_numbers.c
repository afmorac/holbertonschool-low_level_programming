#include "main.h"

/**
 * print_numbers - Prints 0-9 followed by a newline.
 * Uses _putchar twice max.
 */
void print_numbers(void)
{
char c;

for (c = '0'; c <= '9'; c++)
_putchar(c);
_putchar('\n');
}

/**
 * print_most_numbers - Prints numbers 0-9 but skips 2 and 4.
 * Uses _putchar twice max.
 */
void print_most_numbers(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
if (c != '2' && c != '4')
_putchar(c);
}
_putchar('\n');
}

