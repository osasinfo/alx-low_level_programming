#include <stdio.h>
#include <stdlib.h>

/**
 * creat_array - creating array
 * @size: size of array to be created
 * @c: character array is initialized
 *
 * Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	S = (char *) malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
