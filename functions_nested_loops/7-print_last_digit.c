#include "main.h"

/**
 * print_last_digit - Imprime y devuelve el último dígito de un número
 * @n: El número del cual extraer el último dígito
 *
 * Return: El último dígito del número
 */
int print_last_digit()
{
int last_digit;
last_digit = n % 10;
if (last_digit < 0)
{
last_digit = last_digit
_putchar(last_digit + '0');
}
return (last_digit);
}
