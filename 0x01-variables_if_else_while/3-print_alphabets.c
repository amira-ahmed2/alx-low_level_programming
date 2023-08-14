#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints the alphabet in lowercase, and then in uppercase, followed by a new line
* description : alphabet to the variable cUpper,cLow
* Return: Always 0 (Success)
*/
int main(void)
{
char cLow;
char cUpper;
cLow = 'a';
cUpper = 'A';
while (cLow <= 'z')
{
putchar(cLow);
cLow = cLow + 1;
while (cUpper <= 'Z')
{
putchar(cUpper);
cUpper = cUpper + 1;
}
putchar('\n');
return (0);
}
