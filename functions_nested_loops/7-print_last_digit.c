#include "main.h"

/**
 * print_last_digit - Imprime y devuelve el último dígito de un número
 * @n: El número del cual extraer el último dígito
 *
 * Return: El último dígito del número
 */
int main(void)
{
int r;
r = print_lastDigit(98);
_putchar('0' + r);
_putchar('\n');
return (0);
}
