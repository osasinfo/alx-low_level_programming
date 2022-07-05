#include "main.h"

/**
 * main - write a program that prints _putchar, followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *ch = "_putchar";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');

	return (0);
}

