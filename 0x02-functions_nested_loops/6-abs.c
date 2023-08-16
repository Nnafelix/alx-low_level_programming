#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: the int to check
 * Return: the absolute value of number or zero
 */
int _abs(int c)
{
	if (c<0)
	{
	int abs;
	abs = c* -1;
	return (abs);
	}
	return(c);
}

