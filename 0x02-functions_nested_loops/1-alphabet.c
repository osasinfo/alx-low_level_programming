#include "main.h"

/**
 * main - write a function that prints the alphabet, in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet(void);
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{

		-putchar(x);
	}
	_putchar('\n');
}
