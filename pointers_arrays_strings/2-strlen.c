#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string to measure
 *
 * Return: Length of the string (excluding null terminator)
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
