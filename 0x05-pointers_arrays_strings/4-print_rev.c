#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: print in reverse
 */
void print_rev(char *s)
{
	int i, j;

	j = 0;

	while (s[j] != '\0')
		j++;

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
