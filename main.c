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

	printf("String:[%s]\n", "I am a string !");
	_printf("String:[%s]\n", "I am a string !");

	len = printf("Percent:[%%]\n");
	len1 = _printf("Percent:[%%]\n");
	printf("len: %d\nlen1: %d\n", len, len1);
	return (0);
}
