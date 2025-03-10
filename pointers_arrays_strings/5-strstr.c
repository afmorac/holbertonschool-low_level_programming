#include "main.h"
#define NULL ((void *)0)
/**
 * _strstr - Locates a substring
 * @haystack: The string to search
 * @needle: The substring to find
 *
 * Return: Pointer to the beginning of the located
 * substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
char *h, *n;
if (!*needle)
return (haystack);
while (*haystack)
{
h = haystack;
n = needle;
while (*h && *n && (*h == *n))
{
h++;
n++;
}
if (!*n)
return (haystack);
haystack++;
}
return (NULL);
}
