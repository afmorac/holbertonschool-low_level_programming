#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to first integer
 * @b: Pointer to second integer
 *
 * Description: This function swaps the values of two integers
 * using a temporary variable.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
