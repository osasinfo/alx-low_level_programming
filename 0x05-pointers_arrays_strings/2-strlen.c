#include "main.h"
#include "string.h"

/**
 * _strlen - Return lenght of a string
 * @s: string check
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
