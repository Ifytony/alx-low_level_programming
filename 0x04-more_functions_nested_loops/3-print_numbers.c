#include "main.h"

/**
 * print_numbers - Prints the number zero to nine
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{

	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
