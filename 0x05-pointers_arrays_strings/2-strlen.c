#include "main.h"
#include "string.h"

/**
 * int _strlen - Return let of a string
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
