#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 *
 * Return ; void
 */

void print_alphabet(void)
{
	char alphbt;

	for (alphbt = 'a'; alphbt <= 'z'; alphbt++)
		_putchar(alphbt);

	_putchar('\n');
}

