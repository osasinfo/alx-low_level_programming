#include <stdio.h>

/**
 * main - description: Prints the letters in lowercase, except for q and e'
 *
 * Return: always 0 (Sucess)
 */
int main(void)
{

	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
	}
	putchar('\n');

	return (0);
}
