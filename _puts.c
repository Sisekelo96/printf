#include "main.h"

/**
 * _puts - prints a string to stdout
 * @string: string to print
 *
 * Return: void
 */
void _puts(char *string)
{
	int i = 0;

	while (string[i] != 0)
	{
		_putchar(string[i]);
		i++;
	}
}
