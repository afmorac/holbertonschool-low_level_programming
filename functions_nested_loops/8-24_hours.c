#include "main.h"

/**
 * jack_bauer - Imprime cada minuto del día
 *
 * Description: La función imprime todas las combinaciones de horas y minutos
 * desde 00:00 hasta 23:59, en formato HH:MM, utilizando `_putchar()`.
 * 
 * Return: No retorna nada (void)
 */
void jack_bauer(void)
{
int hora = 0;
while (hora < 24)
{
int min = 0;
while (min < 60)
{
_putchar('0' + (hora / 10));
_putchar('0' + (hora % 10));
_putchar(':');
_putchar('0' + (min / 10));
_putchar('0' + (hora % 10));
_putchar('\n';
min++;
}
hora++;
}
}
