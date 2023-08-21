#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len1;

	printf("Let's try to printf a simple sentence.\n");
	_printf("let's try to printf a simple sentence.\n");

	printf("Character:[%c]\n", 'H');
	_printf("Character:[%c]\n", 'H');

	len = printf("String:[%s]\n", NULL);
	len1 = _printf("String:[%s]\n", NULL);

	printf("Percent:[%%]\n");
	_printf("Percent:[%%]\n");

	
	printf("Test[% ]\n");
	_printf("Test[% ]\n");

	printf("");
	_printf("");
	printf("Test[%q]\n");
	_printf("Test[%q]\n");
	printf("len: %d\nlen1: %d\n", len, len1);

	return (0);
}
