#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: the number to be chekcked
 * Return: 1 if n is positive , -1 if n is négative or 0 otherways
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf('+');
		return (1);
	}
	if (n < 0)
	{
		Printf('-');
		return (-1);
	}
	else
	{
		printf('0');
		return (0);
	}
}

