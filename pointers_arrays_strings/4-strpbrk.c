#include "main.h"
#define NULL ((void *)0)
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The set of bytes to search for
 *
 * Return: Pointer to the first occurrence in s of any byte
 * from accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
char *a;
while (*s)
{
for (a = accept; *a; a++)
{
if (*s == *a)
return (s);
}
s++;
}
return (NULL);
}
