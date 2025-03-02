#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
int count = 0;
while (s[count] != '\0')
{
count++;
}
return (count);
}
