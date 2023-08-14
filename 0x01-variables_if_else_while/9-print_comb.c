#include <stdio.h>
#include <stdlib.h>
/**
* main - that prints all possible combinations of single-digit numbers.
* description : the single-digit numbers to the variable nums
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned int nums = 48;
while (nums < 58)
{
putchar(nums);
putchar(',');
nums += 1;
}
putchar('\n');
return (0);
}
