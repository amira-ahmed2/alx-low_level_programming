#include "main.h"

/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 *
 * Return: Always 0.
 *
 */
void jack_bauer(void)
{
int hour;
int mins;

for (hour = 0; hour <= 23; hour++)
{
for (mins = 0; mins <= 59; mins++)
{
_putchar(hour / 10 + '0');
_putchar(hour % 10 + '0');
_putchar(':');
_putchar(mins / 10 + '0');
_putchar(mins % 10 + '0');
_putchar('\n');
}
}
}
