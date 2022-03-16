#include "main.h"

/**
 * print_last_digit - prints the last digit of integer
 * @n: integer from which the last digit is extracted
 * Return: last digit of integer
 */

int print_last_digit(int n)
{
	int r;

	if (n >= 0)
		r = n % 10;
	else
		r = -1 * (n % 10);
	_putchar(r + '0');
	return (r);
}
