#include "main.h"
#include <stddef.h>

/**
 * _strlen - returns the length of string
 * @s: the string to get the length of
 * Return: the length of @s
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	length++;
	return (length);
}
