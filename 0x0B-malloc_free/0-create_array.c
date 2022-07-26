#include <stdio.h>
#include <stdlib.h>

/**
 * creat_array - creates an array of chars and initialize it
 * @size: size of array to be initialized
 * @c: The specific char to initialize the array with
 *
 * Return: a pointer to an arry
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *) malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
