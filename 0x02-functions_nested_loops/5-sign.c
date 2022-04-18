#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: an int value used as an argument for the function
 *
 * Return: 1 and prints + if n is greater than 0
 * 0 and prints 0 if n is 0
 * -1 and prints -1 if n is less than zero
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

