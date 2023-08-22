#include "main.h"

/**
 * _puts - prints a string to stdout
 * @string: string to print
 *
 * Return: number of character printed
 */
int _puts(char *string)
{
	char *null = "(null)";
	int i = 0, count = 0;

	if (string == NULL)
	{

		while (null[i] != '\0')
		{
			_putchar(null[i]);
			count++;
			i++;
		}
	}
	else
	{
		while (string[i] != '\0')
		{
			_putchar(string[i]);
			count++;
			i++;
		}
	}
	count--;
	return (count);
}
