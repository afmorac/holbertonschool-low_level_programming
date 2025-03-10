#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * is_number - Checks if a string is a valid positive number
 * @s: The string to check
 *
 * Return: 1 if valid, 0 if invalid
 */
int is_number(char *s)
{
int i = 0;
while (s[i])
{
if (!isdigit(s[i])) /* Si no es un número, retorna 0 */
return (0);
i++;
}
return (1);
}

/**
 * main - Adds positive numbers from arguments
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 if success, 1 if an invalid number is found
 */
int main(int argc, char *argv[])
{
int sum = 0, i, num;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (!is_number(argv[i])) /* Verifica si es un número */
{
printf("Error\n");
return (1);
}
num = atoi(argv[i]); /* Convierte a entero */
sum += num;
}
printf("%d\n", sum);
return (0);
}
