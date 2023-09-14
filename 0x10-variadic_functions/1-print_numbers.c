#include "variadic_functions.h"

/**
 * print_numbers - that prints numbers, followed by a new line
 * @separator: to be printed between numbers
 * @n: number of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
int i = n;
va_list ap;
if (!n)
{
printf("\n");
return;
}
va_start(ap, n);

while (i--)
printf("%d%s", va_arg(ap, int), i ? (separator ? separator : "") : "\n");

va_end(ap);
}
