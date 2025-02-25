#include "main.h"

/**
 * print_most_numbers - Prints numbers 0-9 but skips 2 and 4.
 * Uses _putchar only twice.
 */
void print_most_numbers(void)
{
char numbers[] = "01356789";
char *ptr = numbers;

while (*ptr)
_putchar(*ptr++);
_putchar('\n');
}

