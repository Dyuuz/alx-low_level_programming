#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n:  is the int that will use for the argument of the function
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;

	_putchar("Last digit = %d", lastdigit);

	return (0);
}

