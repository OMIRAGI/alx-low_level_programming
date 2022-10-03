#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an arrayof chars to be
 * initialized with a special character
 *
 * @size: size of the array to be created
 * @c:char to intialize the array c
 *
 *
 * Return:pointer to tne array if successful
 * NULL if theres an error.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	*(p + i) = '\0';

	return (p);
}
