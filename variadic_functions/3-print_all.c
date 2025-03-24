#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on format
 * @format: List of types of arguments passed
 */

void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
char *sep = "";

va_start(args, format);

while (format && format[i])
{
if (format[i] == 'c')
{
printf("%s%c", sep, va_arg(args, int));
sep = ", ";
}
if (format[i] == 'i')
{
printf("%s%d", sep, va_arg(args, int));
sep = ", ";
}
if (format[i] == 'f')
{
printf("%s%f", sep, va_arg(args, double));
sep = ", ";
}
if (format[i] == 's')
{
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
sep = ", ";
}
i++;
}
va_end(args);
printf("\n");
}
