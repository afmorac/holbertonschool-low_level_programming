#include <stdio.h>
#include "main.h"
/**
 * main - Prints the number of arguments passed to the program
 * @argc: Number of arguments
 * @argv: Array of argument strings (unused)
 *
 * Return: Always 0 (Success)
 */
main (int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
