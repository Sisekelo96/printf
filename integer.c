#include "main.h"

/**
 * integer - handles outputting of numbers
 * num: numbers entered
 * Return: void
 */
void integer(int number)
{
	int digit;

	if (number < 0)
	{
		_putchar('-');
		number = -number;
	}
	if (number >= 10)
	{
		integer(number / 10);
	}

	digit = number % 10;
	_putchar(digit + '0');
}
