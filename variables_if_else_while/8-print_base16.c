#include <stdio.h>

/**
 * main - Print all # in base 16, lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;

for (num = '0'; num <= '9'; num++)
{
putchar(num);
}
for (num = 'a'; num <= 'f'; num++)
{
putchar(num);
}
putchar('n');
return (0);
}
