#include "main.h"

/**
 * more_numbers - Prints 0-14 ten times
 */
void more_numbers(void)
{
int i;
char numbers[] = "01234567891011121314";

for (i = 0; i < 10; i++)
{
char *ptr = numbers;
while (*ptr)
_putchar(*ptr++);
_putchar('\n');
}
}

