#include "main.m"

/**
 * print_sign - print the sign of a mnum
 * @n: the number of the signs to be printed
 * Returns 1 and prints 0 if n is zero
 * -1 and prints -iv n if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);

	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('_')
		return (-1);
	}
}
