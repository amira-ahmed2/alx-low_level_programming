i#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
 /**
 * main - prints the last digit of the random
 * a random number to the variable n
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 2 > 5)
		printf("and is greater than 5\n");
	else if (n % 2 == 0)
		printf("and is 0\n");
	else if (n % 2 < 6 && n % 2 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
