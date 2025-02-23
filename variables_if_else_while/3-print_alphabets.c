#include <stdio.h>

/**
 * main - prints alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

while (*alphabet)
{
putchar(*alphabet++);
}
putchar('\n');
return (0);
}
