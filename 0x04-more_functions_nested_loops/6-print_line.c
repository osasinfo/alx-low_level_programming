#include "main.h"

/**
 * print_line - function that prints the numbers, from 0 to 9
 * @n: is the integer for the paramaters of my function
 * Returns: Always 0
 */
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l <= n; l++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
	else
		_putchar('\n');
}
