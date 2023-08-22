#include "main.h"
/**
 * _printf - print text and variable values in a specific format
 * @format: character string
 * Return: number of characters printd
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0;
	char *str;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[0] == '%' && format[1] == ' ')
			{
				va_end(arg);
				return (-1);
			}
			if (format[i] == '\0')
			{
				va_end(arg);
				return (-1);
			}
			switch (format[i])
			{
				case 'c':
					_putchar(va_arg(arg, int));
					break;
				case 's':
					str = va_arg(arg, char *);
					count = count +  _puts(str);
					break;
				case '%':
					_putchar('%');
					break;
				default:
					_putchar(format[i - 1]);
					count++;
					_putchar(format[i]);
					break;
			}
			count++;
			i++;
		}
		if (format[i] == '\0')
			break;
		_putchar(format[i]);
		count++;
		i++;
	}
	va_end(arg);
	return (count);
}
