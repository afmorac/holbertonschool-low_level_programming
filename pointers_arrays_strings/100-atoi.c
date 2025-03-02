#include "main.h"
#include <limits.h>
/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string
 *
 * Return: The converted integer, or 0 if no numbers found
 */
int _atoi(char *s)
{
int i = 0, sign = 1, result = 0, started = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
if (result > (INT_MAX / 10) ||
result == (INT_MAX / 10) && (s[i] - '0') > (INT_MAX % 10))
{
return (sign == 1 ? INT_MAX : INT_MIN);
}
result = result * 10 + (s[i] - '0');
started = 1;
}
else if (started)
break;
i++;
}
return (result *sign);
}
