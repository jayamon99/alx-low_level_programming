#include "main.h"

/**
 *_isalpha - checks for uppercase and lowercase
 *
 * @c: argument for function
 *
 * Return: 1 if true 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

