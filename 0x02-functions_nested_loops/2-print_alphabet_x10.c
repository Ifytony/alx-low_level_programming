#include "main.h"
/**
 * main - prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: 0
 */
void print_alphabet_x10(void);
{
	int count = 0;
	char letter;

	while (count++ <= 1)

	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');
	}
}
