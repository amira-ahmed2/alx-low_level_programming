#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints the alphabet in lowercase
* description : alphabet to the variable chLow
* Return: Always 0 (Success)
*/
int main(void)
{
char chLow;
chLow = 'q';
while (chLow >= 'e')
{
putchar(chLow);
chLow = chLow - 1;
}
putchar('\n');
return (0);
}
