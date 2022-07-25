#include <stdio.h>

/**
 * main -> this is a fumnction to print its name
 * @argc: argc parameter
 * @argv: an parameter
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
