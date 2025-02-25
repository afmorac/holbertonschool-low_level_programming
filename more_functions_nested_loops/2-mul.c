#include "main.h"

/**
 * _isupper - Checks for uppercase character.
 * @c: The character to check.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

/**
 * _isdigit - Checks for a digit (0 through 9).
 * @c: The character to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}

/**
 * mul - Multiplies two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The result of multiplying a and b.
 */
int mul(int a, int b)
{
return (a * b);
}

