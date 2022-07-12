#include "main.h"
#include <string.h>

/**
 * puts_half - function should print the second half of the string
 * @str: string parameter
 */
void puts_half(char *str)
{
	int i, len, n;

	len = strlen(str);

	if (len % 2 == 1)
		n = len / 2 + 1;
	else
		n = len / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
