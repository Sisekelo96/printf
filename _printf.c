#include "main.h"
/**
 * _printf - print text and variable values in a specific format
 * @format: character string
 * Return: number of characters printd
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list arg;

	va_start(arg, format);
	while (format[i] != '\0')
	{
		_putchar(format[i]);
		i++;
	}
	return (i);
}

