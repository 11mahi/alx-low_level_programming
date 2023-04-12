#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @size: bytes each and returns a pointer to allocated memory
 * @nmemb: allocate memory of array
 * @size: allocates element of size byte
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *n;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = malloc(nmemb * size);
	if (n == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		n[b] = 0;
	return (n);
}
