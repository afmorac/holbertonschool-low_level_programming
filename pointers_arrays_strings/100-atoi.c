#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string
 *
 * Return: The converted integer, or 0 if no numbers found
 */
int _atoi(char *s)
{
int = 0, sign = 1, result = 0, started = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] == '+')
sign *= 1;
else if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
started = 1;
}
else if (started)
break;
i++;
}
result(result *sign);
}
