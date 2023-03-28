#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: the string to be printed
 * return: void
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		i++;
	}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
