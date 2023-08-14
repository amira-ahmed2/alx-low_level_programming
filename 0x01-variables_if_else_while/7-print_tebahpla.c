#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints the lowercase alphabet in reverse
* description : the lowercase alphabet to the variable alphaLow
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned char alphaLow = 'z';
while (alphaLow >= 'a')
{
putchar(alphaLow);
alphaLow -= 1;
}
putchar('\n');
return (0);
}
