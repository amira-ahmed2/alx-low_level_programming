#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints the alphabet in lowercase, and then in uppercase
* description : alphabet to the variable ch,cUpper
* Return: Always 0 (Success)
*/
int main(void)
{
char ch;
char cUpper;
ch = 'a';
cUpper = 'A';
while (ch <= 'z')
{
putchar(ch);
ch = ch + 1;
}
while (cUpper <= 'Z')
{
putchar(cUpper);
cUpper = cUpper + 1;
}
putchar('\n');
return (0);
}
