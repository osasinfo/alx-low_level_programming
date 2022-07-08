#include "main.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed
 * Returns: Always 0
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar('_');
			a++;
		}
	_putchar('\n');
	}
	else
		_putchar('\n');
}
