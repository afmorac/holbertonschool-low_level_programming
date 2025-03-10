#include "main.h"
#define NULL ((void *)0)
/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search
 * @accept: The set of characters to match
 *
 * Return: Number of bytes in the initial
 * segment of s consisting only of accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
char *a;
while (*s)
{
for (a = accept; *a; a++)
{
if (*s == *a)
{
count++;
break;
}
}
if (!*a)
break;
s++;
}
return (count);
}
