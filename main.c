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
	len = printf("Test[% ]\n");
	len1 = _printf("Test[% ]\n");
	printf("len: %d\nlen1: %d\n", len, len1);

	return (0);
}
