#include "main.h"

/**
 * print_rev - function that prints string in reverse
 * @s: function argument
 * Return: void
 */
void print_rev(char *s)
{
	unsigned int count;

	count = 0;

	while (s[count])
	{
		count++;
	}
	while (count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}

