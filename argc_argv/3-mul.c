#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Multiplies two numbers passed as arguments
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 if successful, 1 if incorrect number of arguments
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc != 3)
{
printf("Error\n");
return (0);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;
printf("%d\n", result);
return (0);
}
