#include "main.h"
/**
 * factorial - returns factorial
 * @n: input
 * Return: factorial for n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
