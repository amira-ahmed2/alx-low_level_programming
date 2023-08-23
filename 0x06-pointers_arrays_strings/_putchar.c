#include "main.h"
#include<stdio.h>

/**
 * _putchar -  prints the char c
 * @c: character to compare
 * Return: on Success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
