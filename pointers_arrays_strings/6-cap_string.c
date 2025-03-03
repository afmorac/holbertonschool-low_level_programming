#include "main.h"

/**
 * cap_string - Capitalizes all words in a string
 * @str: The string to modify
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
int i = 0;
int capitalize_next = 1;
while (str[i] != '\0')
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == ',' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
capitalize_next = 1;
}
else if (capitalize_next == 1 && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
capitalize_next = 0;
}
else if (str[i] >= 'A' && str[i] <= 'Z')
{
capitalize_next = 0;
}
i++;
}
return (str);
}
