#include <stdio.h>

/**
 * main - prints alphabet in lowercase, except 'q' ans 'e'
 *
 * Return: Always 0 (Succedd)
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'q' && c != 'e')
putchar(c);
c++;
}
putchar('\n');
return (0);
}

