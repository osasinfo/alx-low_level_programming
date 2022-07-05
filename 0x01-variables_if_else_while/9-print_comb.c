#include <stdio.h>

/**
 * main - print all possible combination of a single digit
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar((digit % 10) + '0');
		if (digit == 9)
			continue;

	putchar(',');

	putchar(' ');

	}

	putchar('\n');

	return (0);
}
