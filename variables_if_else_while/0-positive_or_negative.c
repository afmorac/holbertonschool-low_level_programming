#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0)); /* Inicializa el generador de números aleatorios */
	n = rand() - RAND_MAX / 2; /* Asigna un número aleatorio a n */

    /* Evaluar si es positivo, negativo o cero */
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);

	return (0);
}

