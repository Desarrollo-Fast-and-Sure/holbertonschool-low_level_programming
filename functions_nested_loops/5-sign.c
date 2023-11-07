#include "main.h"

/**
*print_sing - Function that prints the sing of a number
*@n: Declare integer variable
*Return: 1 if n is greater than zero
*0 if n is zero
*-1 if n is less than zero
*/
int print_sing(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
		_putchar('-');
		return (-1);
}
