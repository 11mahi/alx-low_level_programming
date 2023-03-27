#include "main.h"
/**
 * swap_int - swap the values of two integers
 * @a: the first integer to  be swaped
 * @b: the second integer to be swaped
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
