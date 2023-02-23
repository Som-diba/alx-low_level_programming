#include "main.h"
/**
 * _abs - function to print absolute value of an integer
 * @a: function parameter to check
 * Return: always a
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
