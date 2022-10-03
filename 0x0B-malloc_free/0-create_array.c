#include <stdlib.h>
#include "main.h"

/**
 *  *create_array - creates an array of chars to be
 *  initialized with a special character
 *
 *  @size: size of the array to be created
 *  @c: char to be initialize the array c
 *
 *
 *  Return: pointer to the array if successful
 *  NULL if there's an error.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
