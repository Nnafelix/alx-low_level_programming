#include "main.h"
/**
 * _memset -  fill the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: initial address of memory to be filled
 * @b: the choosen  value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
