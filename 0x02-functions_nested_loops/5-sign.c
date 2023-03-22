#include "main.h"
/**
 * print_sign - prints sign of number
 * @n: the number to be checked
 * return: 1 for postive numbers -1 for nergative numbers and zero for anything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
