#include "main.h"
#define NULL ((void *)0)
/**
 * print_chessboard - Prints the chessboard
 * @a: The chessboard to print (8x8 array)
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
