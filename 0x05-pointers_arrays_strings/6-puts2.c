#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every other character of a string
 * @str: str paramater
 */
void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
