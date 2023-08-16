#include "main.h"

/**
 * times_table - that prints the 9 times table, starting with 0
 * Return: Always 0.
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int num = j * i;

			if (j == 0)
			{
				putchar('0');
			} else if (num <= 9)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(num + '0');
			} else
			{
				putchar(',');
				putchar(' ');
				putchar(num / 10 + '0');
				putchar(num % 10 + '0');
			}
		}
		putchar('\n');
	}
}
