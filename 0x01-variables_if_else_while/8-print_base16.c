#include <stdio.h>
/**
* main - prints all the numbers of base 16 in lowercase
* description : followed by a new line to the variable nums
* Return: Always 0 (Success)
*/
int main(void)
{
int nums;
for (nums = 48; nums < 58; nums++)
{
putchar(nums);
}
for (nums = 'a'; nums <= 'f'; nums++)
{
putchar(nums);
}
putchar('\n');
return (0);
}
