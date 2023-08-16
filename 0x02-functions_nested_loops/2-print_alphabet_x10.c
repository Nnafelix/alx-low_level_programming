#include "main.h"

/**
 * Print_alphabet_x10 - make alphabet x10 in lower case
 * Return : void
 */
 
 void Print_alphabet_x10(vvoid)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a'; while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

