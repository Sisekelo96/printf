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
	len = _printf("Let's try to printf a simple sentence.\n");
	len1 = printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	len1 = _printf("String:[%s]\n", "I am a string !");
	len = printf("String:[%s]\n", "I am a string !");
	len1 = _printf("Percent:[%%]\n");
	len = printf("Percent:[%%]\n");
	len1 = _printf("Unknown:[%r]\n");
	len = printf("Unknown:[%r]\n");

	printf("Test[% ]\n");
	_printf("Test[% ]\n");
	printf("len: %d\nlen1: %d\n", len, len1);

	return (0);
}
