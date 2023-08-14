#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - prints all single digit numbers of base 10 starting from 0
* description : single digit numbers to the variable nums
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned char nums = 0;
while (nums < 10)
{
printf("%d", nums);
nums += 1;
}
putchar('\n');
return (0);
}
