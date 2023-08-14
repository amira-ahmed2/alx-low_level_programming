#include <stdio.h>
/**
* main - that prints all possible combinations of single-digit numbers.
* description : the single-digit numbers to the variable nums
* Return: Always 0 (Success)
*/
int main(void)
{
int nums;
for (nums = 48; nums < 58; nums++)
{
putchar(nums);
if (nums != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
