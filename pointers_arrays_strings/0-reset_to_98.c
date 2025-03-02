#include <stdio.h>
#include "main.h"

/**
 * Update de the value
 *
 **/
void reset_to_98(int *n)
{
*n = 98;
}

int main(void)
{
int n = 402;
printf("before n: %d\n", n);
reset_to_98(&n);
printf("after n : %d\n"), n;

return (0);
}

