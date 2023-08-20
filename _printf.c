#include "main.h"
/**
 * _printf - print text and variable values in a specific format
 * @format: character string
 * Return: number of characters printd
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0, chr, j;
	char *str;
	va_list arg;

	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					chr = va_arg(arg, int);
					_putchar(chr);
					i++;
					count++;
					break;
				case 's':
					str = va_arg(arg, char *);
					for (j = 1; str[j] != '\0'; j++)
						count++;
					_puts(str);
					i++;
					count++;
					break;
				case '%':
					_putchar('%');
					i++;
					count++;
					break;
			}
		}
		_putchar(format[i]);
		count++;
		i++;
	}
	va_end(arg);
	return (count);
}

