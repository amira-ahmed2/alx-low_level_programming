#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints the alphabet in lowercase,followed by a new line
* description : alphabet to the variable c
* Return: Always 0 (Success)
*/
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
putchar(c);
c = c + 1;
}
putchar('\n');
return (0);
}
